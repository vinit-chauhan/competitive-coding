import java.io.*;

class EVENM {
	public static void main(String[] args) throws Exception {
		try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			PrintWriter out = new PrintWriter(System.out)) {

			int test = Integer.valueOf(br.readLine().trim());
			while (test-- != 0) {
				int n = Integer.valueOf(br.readLine().trim());
				int[][] arr = new int[n][n];

				int count = 1;
				int i   = 0,
					rev = 0,
					j   = 0;
				while(count <= n*n) {
					if( (i & 1) == 0)
						arr[i][j] = count;
					else 
						arr[i][j] = rev;

					count++;
					rev = (rev == 0) ? 0 : rev - 1;
					j++;
					if(j >= n) {
						i++;
						j = 0;
						if((i & 1) == 1) {
							rev = count - 1 + n;
						}
					}
				}
				
				for(i = 0; i < n; i++) {
					for(j = 0; j < n; j++) {
						out.print(arr[i][j] + " ");
					}
					out.print("\n");
				}
			}
			out.flush();
		}
	}
}
