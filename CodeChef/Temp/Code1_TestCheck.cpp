#include <iostream>
#define ll long long int
using namespace std;
#define mx 100000
ll a[mx], b[mx];

int main() {
	int t;
	ll n, k, x, i, profit;
	cin>>t;
	while(t--) {
	    profit = 0;
	    cin>>n>>k;
	    for(i = 0; i < n; i++)
	        cin>>a[i];
	    for(i = 0; i < n; i++)
	        cin>>b[i];
	    for(i = 0; i < n; i++)
	        profit = max(profit, b[i]*(k/a[i]));

      cout << profit << endl;
	}
	return 0;
}
