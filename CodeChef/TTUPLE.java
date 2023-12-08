import java.io.*;
import java.util.Arrays;

class TTUPLE {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            PrintWriter out = new PrintWriter(System.out)) {
            int test = Integer.valueOf(br.readLine().trim());
            while (test-- != 0) {
                int oriT[] = Arrays.asList(br.readLine()
                                                .trim()
                                                .split(" "))
                                        .stream()
                                        .mapToInt(Integer::valueOf)
                                        .toArray();
                int newT[] = Arrays.asList(br.readLine()
                                                .trim()
                                                .split(" "))
                                        .stream()
                                        .mapToInt(Integer::valueOf).toArray();
                
                int[] subT = new int[3],
                      divT = new int[3],
                      remT = new int[3];

                for(int i = 0; i < 3; i++) {
                    subT[i] = newT[i] - oriT[i];
                    divT[i] = newT[i] / oriT[i];
                    remT[i] = newT[i] % oriT[i];
                }

                Arrays.stream(subT).forEach(i -> out.print(i + " "));
                out.println();
                Arrays.stream(divT).forEach(i -> out.print(i + " "));
                out.println();
                Arrays.stream(remT).forEach(i -> out.print(i + " "));
                out.println();

                // tryu finding relation between this three arrays...
            }
            out.flush();
        }
    }
}