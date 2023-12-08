import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

class CHEFSTR1 {
    public static void main(String[] args) throws Exception {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            PrintWriter out = new PrintWriter(System.out)) {
            
            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                long jumps = 0;
                int n = Integer.valueOf(br.readLine().trim());
                int[] arr = Arrays.asList(br.readLine().trim().split(" ")).stream().mapToInt(Integer :: valueOf).toArray();

                for(int i = 0; i < n - 1; i++) {
                    jumps = jumps + (Math.abs(arr[i] - arr[i + 1]) - 1);
                }
                out.println(jumps);
            }
            out.flush();
        }
    }
}