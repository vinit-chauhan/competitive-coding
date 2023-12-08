import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class CoinChangeDPDemo {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {
            // 
            int test = Integer.valueOf(br.readLine().trim());
            while(test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());
                int[] dp = new int[n + 1];

                for(int i = 0; i <= n; i++) {
                    dp[i] = Integer.MAX_VALUE;
                }

                //Arrays.stream(dp).forEach(e -> out.print(e + " "));

                int[] coins = Arrays.asList(br.readLine().
                                                trim().
                                                split(" ")).
                                    stream().
                                    mapToInt(Integer :: valueOf).
                                    toArray();                                    

                //Arrays.stream(coins).forEach(e -> out.print(e + " "));
                
                dp[0] = 0;
                for(int i = 1; i <= n; i++) {
                    for(int c: coins) {
                        if(i-c >= 0)
                            dp[i] = (dp[i] < dp[i-c] + 1)? dp[i] : dp[i-c] + 1; 
                    }
                }
                out.println(dp[n] >= 0 ? "Minimum coins : " + dp[n] : "Not Possible");
                //Arrays.stream(dp).forEach(e -> out.print(e + " "));
            }
            out.flush();
        } 
    }
}