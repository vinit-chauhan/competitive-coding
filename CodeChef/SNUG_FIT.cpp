#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while(test--) {
        long sum = 0;
        int n;
        cin >> n;
        int a[n], b[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a+n);
        sort(b, b+n);

        for(int i = 0; i < n; i++) {
            sum += a[i] < b[i]? a[i] : b[i];
        }
        cout << sum << endl;
    }
    return 0;
}
