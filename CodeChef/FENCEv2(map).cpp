#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int k, n, m, x, y;
        map <pair<int, int>,int> mp;
        cin >> n >> m >> k;
        int l = k;
        while(l--) {
            cin >> x >> y;
            mp.insert(pair<pair<int, int>, int> (make_pair(x,y), 4));
        }
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            int r, s;
            r = itr->first.first;
            s = itr->first.second;
            if(mp.find(make_pair(r - 1, s)) != mp.end()) {
                itr->second--;
            }
            if(mp.find(make_pair(r + 1, s)) != mp.end()) {
                itr->second--;
            }
            if(mp.find(make_pair(r, s - 1)) != mp.end()) {
                itr->second--;
            }
            if(mp.find(make_pair(r, s + 1)) != mp.end()) {
                itr->second--;
            }
        }
        int ans = 0;
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            ans += itr->second;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
1
4 4 9
1 4
2 1
2 2
2 3
3 1
3 3
4 1
4 2
4 3
*/
