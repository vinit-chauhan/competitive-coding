import java.io.*;

class ADASHOP2 {
    public static void main(String[] args) throws java.lang.Exception {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int t = Integer.parseInt(br.readLine());
            String str[] = { "1 1", "7 7", "6 8", "1 3", "3 1", "7 5", "4 8", "1 5", "5 1", "7 3", "2 8", "1 7", "7 1",
                    "8 2", "7 3", "8 4", "7 5", "8 6", "7 7", "8 8" };
            while (t-- > 0) {
                String n[] = br.readLine().split(" ");
                int i;
                if (Integer.parseInt(n[0]) == Integer.parseInt(n[1])) {
                    if (Integer.parseInt(n[0]) == 1) {
                        System.out.println("19");
                        for (i = 1; i < 20; i++)
                            System.out.println(str[i]);
                    } else {
                        System.out.println("20");
                        for (i = 0; i < 20; i++)
                            System.out.println(str[i]);
                    }

                } else {
                    System.out.println("21");
                    System.out.println((Integer.parseInt(n[0]) + Integer.parseInt(n[1])) / 2 + " "
                            + (Integer.parseInt(n[0]) + Integer.parseInt(n[1])) / 2);
                    for (i = 0; i < 20; i++)
                        System.out.println(str[i]);
                }
            }
        } catch (Exception e) {
        }
    }
}