#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " : " << x << endl;

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while (test--) {
        int count = 0;
        int n;
        cin >> n;
        string strs[n];
        int nums[n];
        for(int i = 0; i < n; ++i) {
            cin >> strs[i];
        }
        for(int i = 0; i < 10; ++i) {
            int weapons = 0;
            for(int j = 0; j < n; ++j) {
                string str = strs[j];
                if(str[i] == '1') ++weapons;
            }
            count += (weapons%2);
        }
        cout << count << endl;
    }
    return 0;
}
