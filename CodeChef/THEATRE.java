import java.io.*;
import java.util.*;

class Main {

    static int[][] dTable = new int[4][4];
    static int profit = 0;
    static int tProfit = 0;
    static int emptyShow = 4;
    public static void main(String[] args) throws Exception {
        ArrayList mTitle = new ArrayList<>(Arrays.asList("A", "B", "C", "D"));
        ArrayList mTime = new ArrayList<>(Arrays.asList("12", "3", "6", "9"));

        BufferedReader bReader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pWriter = new PrintWriter(System.out);

        int test = Integer.parseInt(bReader.readLine().trim());        
        while (test-- != 0) {       
            int n = Integer.parseInt(bReader.readLine().trim());
            
            String[] s;
            for (int i = 0; i < n; i++) {
                s = bReader.readLine().trim().split(" ");
                dTable[mTitle.indexOf(s[0])][mTime.indexOf(s[1])]++;
            }

            for(int i = 0; i < 4; i++)
                findMax(100 - (25*i)); 
            
            profit = profit - (100 * emptyShow);
            tProfit += profit;

            pWriter.println(profit);
            
            //---for clearing table after every testcase---
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) 
                    dTable[i][j] = 0;
            }
            profit = 0;
            emptyShow = 4;
            //---------------------------------------------
        }   
        pWriter.println(tProfit);
        pWriter.flush();
    }

    public static void confirmShow(int title, int time, int price) {
        profit += dTable[title][time] * price;
        emptyShow--;

        for (int i = 0; i < 4; i++) {
            dTable[i][time] = 0;
            dTable[title][i] = 0;
        }
    }

    public static void findMax(int price) {
        int title = 0;
        int time = 0;
        int max = 0;
        boolean change = false;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (max < dTable[i][j]) {
                    max = dTable[i][j];
                    title = i;
                    time = j;
                    change = true;
                }
            }
        }

        // check row and col for same value 
        //---- if same is found then check row and col of that for max 
        /* 
            0  0  0  0 
            0  11 11 0
            0  9  3  0
            0  0  0  0
            
        */
        //     else just go with same approach.
        
        if(change)
            confirmShow(title, time, price);
    }

}