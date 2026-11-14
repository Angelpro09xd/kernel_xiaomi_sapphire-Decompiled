// args: <out file> <addr:count:kind>...   kind = u32 | ptrstr
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.io.*;
public class DumpData extends GhidraScript {
    String cstr(Address a) throws Exception { StringBuilder s=new StringBuilder(); for(int i=0;i<200;i++){byte b=currentProgram.getMemory().getByte(a.add(i)); if(b==0)break; s.append((char)(b&0xff));} return s.toString(); }
    public void run() throws Exception {
        String[] a = getScriptArgs(); PrintWriter w = new PrintWriter(new FileWriter(a[0]));
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) w.println("BLOCK " + b.getName() + " " + b.getStart() + " " + b.getSize());
        for (int i = 1; i < a.length; i++) {
            String[] p = a[i].split(":"); Address ad;
            if (p[0].startsWith("0x")) ad = toAddr(Long.parseLong(p[0].substring(2),16));
            else { java.util.List<Symbol> l = getSymbols(p[0], null); Symbol s = l.isEmpty() ? null : l.get(0); if (s==null){w.println("NOSYM "+p[0]);continue;} ad = s.getAddress(); }
            int n = Integer.parseInt(p[1]);
            w.println("DATA " + p[0] + " @ " + ad + " kind=" + p[2]);
            for (int k = 0; k < n; k++) {
                if (p[2].equals("u32")) w.println("  ["+k+"] 0x" + Integer.toHexString(currentProgram.getMemory().getInt(ad.add(4L*k))));
                else { long v = currentProgram.getMemory().getLong(ad.add(8L*k)); String sv;
                       try { sv = (v == 0) ? "NULL" : "\"" + cstr(toAddr(v)) + "\""; } catch (Exception e) { sv = "?0x" + Long.toHexString(v); }
                       w.println("  ["+k+"] -> " + sv); }
            }
        }
        w.close();
    }
}
