import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map.Entry;

public class ANSLEAK {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {
            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                String[] nmk = br.readLine().trim().split(" ");
                int n = Integer.valueOf(nmk[0]);
                int m = Integer.valueOf(nmk[1]);
                int k = Integer.valueOf(nmk[2]);

                for (int i = 0; i < n; i++) {
                    HashMap<String, Integer> map = new HashMap<>();
                    String[] c = br.readLine().trim().split(" ");

                    for (String ans : c) {
                        map.put(ans, (map.get(ans) != null) ? map.get(ans) + 1 : 1);
                    }

                    Entry<String, Integer> max = Collections.max(map.entrySet(), (Entry<String, Integer> e1,
                            Entry<String, Integer> e2) -> e1.getValue().compareTo(e2.getValue()));
                    out.print(max.getKey() + " ");
                }
            }
            out.flush();
        }
    }
}