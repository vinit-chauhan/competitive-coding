import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

class COVIDLQ {
    public static void main(String[] args) {
        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);) {

            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());

                String[] l = br.readLine().trim().split(" ");

                int[] line = new int[]{};
                
                line = Arrays.asList(l)
                            .stream()
                            .mapToInt(Integer :: valueOf)
                            .toArray();

                int sum = 0;
                boolean isDistanceMaintained = true;

                if(n <= 6) {
                    for(int i : line) 
                        sum += i;
                    if(sum > 1) 
                        isDistanceMaintained = false;
                } else {
                    for(int i = 0; i < 6; i++) {
                        sum += line[i];
                        if(sum > 1) {
                            isDistanceMaintained = false;
                            break;
                        }
                    }
                    for(int i = 6; i < n; i++) {
                        sum = sum + line[i] - line[i - 6];
                        if(sum > 1) {
                            isDistanceMaintained = false;
                            break;
                        }
                    }
                }

                if(isDistanceMaintained) {
                    out.println("YES");
                } else {
                    out.println("NO");
                }
            }
            out.flush();
        } catch(Exception ex) {
            ex.printStackTrace();
        }
    }
}