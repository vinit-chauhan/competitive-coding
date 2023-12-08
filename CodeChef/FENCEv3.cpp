#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m, k;
        vector <pair <int, int>> v;
        cin >> n >> m >> k;
        int i = 0;
        while(i < k) {
            int r,c;
            cin >> r >> c;
            v.push_back(make_pair(r,c));
            i++;
        }
        int fence;
        fence = k * 4;
        for(int j = 0; j < k; j++) {

            for(int l = 0; l < k; l++) {
                if(make_pair(v[l].first, v[l].second) == make_pair(v[j].first + 1, v[j].second)) {
                    fence--;
                }
                if(make_pair(v[l].first, v[l].second) == make_pair(v[j].first - 1, v[j].second)) {
                    fence--;
                }
                if(make_pair(v[l].first, v[l].second) == make_pair(v[j].first, v[j].second + 1)) {
                    fence--;
                }
                if(make_pair(v[l].first, v[l].second) == make_pair(v[j].first, v[j].second - 1)) {
                    fence--;
                }

            }
        }
        cout << fence << endl;
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

//20
