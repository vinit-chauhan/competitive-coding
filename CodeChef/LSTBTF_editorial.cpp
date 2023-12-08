#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<double> VD;
#define MP make_pair
#define PB push_back
#define X first
#define Y second

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define ITER(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define ALL(a) a.begin(), a.end()
#define SZ(a) (int)((a).size())
#define FILL(a, value) memset(a, value, sizeof(a))
#define debug(a) cout << #a << " = " << a << endl;

const double PI = acos(-1.0);
const LL INF = 1e9 + 47;
const LL LINF = INF * INF;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

inline bool isSquare(int s)
{
	int t = sqrt(s);
	return t * t == s;
}

int n;
char dp[10][30][81 * 30];
int cnt1;

inline int f(int curr, int cnt, int sum)
{
	if (curr == 10)
		return cnt == 0 && isSquare(sum + cnt1);

	if (dp[curr][cnt][sum] != -1)
		return dp[curr][cnt][sum];

	int res = 0;
	FOR(i, 0, cnt + 1)
		res |= f(curr + 1, cnt - i, sum + i * curr * curr);

	return dp[curr][cnt][sum] = res;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("In.txt", "r", stdin);
	//freopen("In.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int cnt = -1;
		for(cnt1 = n; cnt1 >= 0; cnt1--)
		{
			FILL(dp, -1);
			cnt = n - cnt1;
			if (f(2, cnt, 0))
				break;
		}

		string s(cnt1, '1');
		assert(cnt != -1);
		int sum = 0;
		FOR(d, 2, 10)
		{
			bool fnd = 0;
			RFOR(i, cnt + 1, 0)
			{
				if (f(d + 1, cnt - i, sum + i * d * d))
				{
					sum += i * d * d;
					cnt -= i;
					FOR(j, 0, i)
						s.push_back('0' + d);

					fnd = 1;
					break;
				}
			}

			assert(fnd);
		}

		cout << s << endl;
        n -= 1;
	}

	cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
	return 0;
}
