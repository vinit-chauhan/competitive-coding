#include<iostream>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int num;
        vector<int> att;
        cin >> num;
        for(int i = 0; i < num; i++) {
            char x;
            cin >> x;
            if( x == 'A')
                att.push_back(0);
            else
                att.push_back(1);
        }
        int init_sum = 0;
        int sum = accumulate(att.begin(), att.end(), init_sum);
        cout << sum;
        if(sum/num < 0.75) {
            
        }

    }
    return 0;
}
