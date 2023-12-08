import java.io.BufferedReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.io.InputStreamReader;

class CHPINTU {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);

        int t = Integer.parseInt(br.readLine());

        while(t-- != 0) {
            String rd[] = br.readLine().trim().split(" ");
            int n = Integer.parseInt(rd[0]);
            int m = Integer.parseInt(rd[1]);
            
            int[] arrF = new int[n];
            int[] arrP = new int[n];
            
            String rdF[] = br.readLine().trim().split(" ");
            String rdP[] = br.readLine().trim().split(" ");

            for(int i = 0; i < n; i++) {
                arrF[i] = Integer.parseInt(rdF[i]);
                arrP[i] = Integer.parseInt(rdP[i]);
            }

            HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
            
            for(int i = 0; i < n; i++) {
                if(!hm.containsKey(arrF[i])) {
                    hm.put(arrF[i], arrP[i]);
                } else {
                    hm.put(arrF[i], arrP[i] + hm.get(arrF[i]));
                }
            }

            final List<Integer> li = new ArrayList<>();
            final int ans = Integer.MAX_VALUE;
            hm.forEach((a, b) -> {
                li.add((b < ans)? b: ans); 
            });

            out.println(Collections.min(li));
        }
        out.flush();
    }
}