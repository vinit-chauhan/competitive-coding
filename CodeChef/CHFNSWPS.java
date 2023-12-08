import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

class MAIN {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {
            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());

                int[] seqOne = Arrays.asList(br.readLine().trim().split(" "))
                                    .stream()
                                    .mapToInt(Integer::valueOf)
                                    .toArray();
                int[] seqTwo = Arrays.asList(br.readLine().trim().split(" "))
                                    .stream()
                                    .mapToInt(Integer::valueOf)
                                    .toArray();

                
            }
            out.flush();
        }
    }
}