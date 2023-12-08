import java.io.*;

class MyMain {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pr = new PrintWriter(System.out);

        int test = Integer.parseInt(br.readLine());
        while (test-- != 0) {
            String[] nk = br.readLine().trim().split(" ");
            int n = Integer.parseInt(nk[0]);
            int k = Integer.parseInt(nk[1]);

            String[] nstr = br.readLine().trim().split(" ");

            long sum = 0;
            for (String num : nstr) {
                sum += Integer.parseInt(num);
            }
            pr.println(sum % k);
        }
        pr.flush();
    }
}