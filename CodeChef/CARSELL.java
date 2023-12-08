import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class CARSELL {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {
            
            int test = Integer.valueOf(br.readLine().trim());

            while (test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());
                int[] priceList = Arrays.stream(br.readLine()
                                                    .trim()
                                                    .split(" "))
                                        .mapToInt(Integer :: valueOf)
                                        .toArray();
                Arrays.sort(priceList);
                long profit = 0;


                for(int i = n - 1; i >= 0; i--) {
                    int temp = (priceList[i] - (n - 1 - i));
                    profit += ( temp > 0 ) ? temp : 0;
                    profit %= 1000000007;
                }


                out.println(profit);
            }
            out.flush();
        }
    }
}