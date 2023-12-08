import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader bReader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pWriter = new PrintWriter(System.out);
        int test = Integer.parseInt(bReader.readLine());
        while (test-- != 0) {
            int n = Integer.parseInt(bReader.readLine());

            String sta[] = bReader.readLine().trim().split(" ");
            String stb[] = bReader.readLine().trim().split(" ");

            int a[] = new int[n];
            int b[] = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(sta[i]);
                b[i] = Integer.parseInt(stb[i]);
            }

            Arrays.sort(a);
            Arrays.sort(b);

            long max = 0;
            for (int i = 0; i < n; i++) {
                max += (a[i] < b[i] ? a[i] : b[i]);
            }
            pWriter.println(max);
        }
        pWriter.flush();
    }
}
