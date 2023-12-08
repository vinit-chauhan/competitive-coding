import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;

class COVID19 {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {

            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());
                int[] x = Arrays.asList(br.readLine().trim().split(" ")).stream().mapToInt(Integer::valueOf).toArray();

                List<Integer> grps = new ArrayList<Integer>();

                int l = 1;
                for (int i = 0; i < n - 1; i++) {
                    if (x[i + 1] - x[i] < 3) {
                        l++;
                    } else {
                        grps.add(l);
                        l = 1;
                    }
                    if(i == n - 2) {
                        grps.add(l);
                    }
                }
                out.println(
                        grps.stream().min(Integer::compare).get() + " " + grps.stream().max(Integer::compare).get());
            }
            out.flush();
        }
    }
}