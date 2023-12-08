#include<iostream>
#define MOD 1000000007
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, ans;
        cin >> n;
        if(n < 31623) {
            ans = n;
            ans = (ans * n) % MOD;
            ans = (ans + n) % MOD;
            ans = ans - 1;
            cout << ans << endl;
        }
        else
            cout << "999982505" << endl;

    }
    return 0;
}


/*
    int m = n, l = n - 1, temp = n;
    m = (m + l) % MOD;
    temp = (temp * l) % MOD;
    m = (m + temp) %  MOD;
    if (m < MOD)
        cout <<
*/
