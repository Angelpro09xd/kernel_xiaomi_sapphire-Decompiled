// Ghidra headless: decompile every function of the current program to a single .c file
// args: <output .c path>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

public class DecompileAll extends GhidraScript {
    // replace &DAT_xxxxxxxx with the NUL-terminated string stored there (KERN_ level prefix stripped)
    String inlineStrings(String c) {
        java.util.regex.Matcher m = java.util.regex.Pattern.compile("&DAT_([0-9a-fA-F]{8,16})").matcher(c);
        StringBuffer sb = new StringBuffer();
        while (m.find()) {
            String rep = m.group(0);
            try {
                ghidra.program.model.address.Address a = toAddr(Long.parseLong(m.group(1), 16));
                StringBuilder s = new StringBuilder(); int i = 0;
                while (i < 400) { byte b = currentProgram.getMemory().getByte(a.add(i)); if (b == 0) break; s.append((char)(b & 0xff)); i++; }
                String v = s.toString();
                if (v.length() >= 2 && v.charAt(0) == 1) v = "<" + v.charAt(1) + ">" + v.substring(2);
                boolean printable = v.length() >= 3;
                for (char ch : v.toCharArray()) if ((ch < 32 && ch != '\n' && ch != '\t') || ch > 126) printable = false;
                if (printable) rep = "\"" + v.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", "\\n").replace("\t", "\\t") + "\"";
            } catch (Exception e) { }
            m.appendReplacement(sb, java.util.regex.Matcher.quoteReplacement(rep));
        }
        m.appendTail(sb);
        return sb.toString();
    }
    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.println("/* Decompiled with Ghidra from " + currentProgram.getName() + " (stock sapphire module) */");
        // define every NUL-terminated string in .rodata.str* so printk formats (KERN_* prefixed) show as literals
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.getName().startsWith(".rodata.str") && !b.getName().startsWith(".modinfo")) continue;
            ghidra.program.model.address.Address a = b.getStart();
            while (a.compareTo(b.getEnd()) < 0) {
                ghidra.program.model.address.Address s = a; int len = 0;
                while (a.compareTo(b.getEnd()) <= 0 && currentProgram.getMemory().getByte(a) != 0) { a = a.add(1); len++; }
                if (len > 0) {
                    try { currentProgram.getListing().clearCodeUnits(s, s.add(len), false);
                          createAsciiString(s, len + 1); } catch (Exception e) { }
                }
                if (a.compareTo(b.getEnd()) >= 0) break;
                a = a.add(1);
            }
        }
        // strings in .rodata / .modinfo
        w.println("/* ===== STRINGS ===== */");
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        while (it.hasNext()) {
            Data d = it.next();
            if (d.hasStringValue()) {
                MemoryBlock b = currentProgram.getMemory().getBlock(d.getAddress());
                String v = String.valueOf(d.getValue()).replace("*/", "* /").replace("\n", "\n");
                w.println("// [" + (b != null ? b.getName() : "?") + "] " + v);
            }
        }
        DecompInterface di = new DecompInterface();
        DecompileOptions opt = new DecompileOptions();
        di.setOptions(opt);
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.openProgram(currentProgram);
        FunctionIterator fi = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0, fail = 0;
        while (fi.hasNext() && !monitor.isCancelled()) {
            Function f = fi.next();
            if (f.isExternal() || f.isThunk()) continue;
            String nm = f.getName();
            if (nm.startsWith("__cfi") || nm.startsWith("__typeid")) continue;
            DecompileResults r = di.decompileFunction(f, 90, monitor);
            w.println("\n/* ---- " + nm + " @ " + f.getEntryPoint() + " ---- */");
            if (r != null && r.decompileCompleted()) { w.println(inlineStrings(r.getDecompiledFunction().getC())); n++; }
            else { w.println("/* decompilation failed: " + (r != null ? r.getErrorMessage() : "null") + " */"); fail++; }
        }
        w.println("/* functions: " + n + " ok, " + fail + " failed */");
        w.close();
        println("DECOMPILED " + currentProgram.getName() + ": " + n + " ok, " + fail + " failed");
    }
}
