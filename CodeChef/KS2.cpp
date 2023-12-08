#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        long long int num, ans, i = 0;
        cin >> num;
        long long int d = 10;
        ans = 19 + 9 * (num - 1);
        int depth = (int)log10(ans) - 1;
        ans +=  9 * depth;
        cout << ans << endl;
    }
    return 0;
}
