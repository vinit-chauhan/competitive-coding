import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

class MAIN {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                PrintWriter out = new PrintWriter(System.out)) {
            int test = Integer.valueOf(br.readLine().trim());
            char CHESSBOARD_KING = 'O',
                 CHESSBOARD_SPACE = '.',
                 CHESSBOARD_OBSTICAL = 'X';
            while (test-- != 0) {
                int n = Integer.valueOf(br.readLine().trim());
                int count = 0;
                for(int i = 0; i < 8; i++) {
                    for(int j = 0; j < 8; j++) {
                        if(i == 0 && j == 0) {
                            out.print(CHESSBOARD_KING);
                        } else if(count < n) {
                            out.print(CHESSBOARD_SPACE);
                        } else {
                            out.print(CHESSBOARD_OBSTICAL);
                        }
                        count++;
                    }
                    out.println();
                }
            }
            out.flush();
        }
    }
}