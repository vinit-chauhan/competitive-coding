#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;

int combin(int n) {
    int answer = (n*(n - 1))/2;
    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int count = 0,
            count0 = 0,
            count2 = 0;

        for(int i = 0; i < n; i++){
            int data;
            cin >> data;
            if(data == 0) count0 += 1;
            if(data == 2) count2 += 1;
        }
        if(count0 > 1)
            count += combin(count0);
        if(count2 > 1)
            count += combin(count2);

        cout << count << endl;
    }
    return 0;
}
