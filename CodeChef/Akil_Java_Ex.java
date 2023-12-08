import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		int t = Integer.parseInt(br.readLine());
		while (t-- != 0) {
			int N = Integer.parseInt(br.readLine());
			String s[] = br.readLine().trim().split(" ");
			int arr[] = new int[N], fact;
			for (int i = 0; i < N; i++)
				arr[i] = Integer.parseInt(s[i]);
			HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
			for (int i = N - 1; i >= 0; i--) {
				if (!hm.containsKey(arr[i]))
					hm.put(arr[i], i);
			}
			int hash[] = new int[N];
			HashSet<Integer> hs = new HashSet<Integer>();
			for (int i = N - 1; i >= 0; i--) {
				for (int k = 1; k * k <= arr[i]; k++) {
					if (arr[i] % k == 0) {
						if (hs.contains(k))
							hash[hm.get(k)]++;
						fact = arr[i] / k;
						if (k != fact && hs.contains(fact))
							hash[hm.get(fact)]++;
					}
				}
				hs.add(arr[i]);
			}
			int max = 0;
			for (int i = 0; i < N; i++)
				max = Math.max(hash[i], max);
			pw.println(max);
		}
		pw.flush();
	}
}
