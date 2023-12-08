#include<iostream>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int numOfCoins;
        bool isPossible = false;
        vector<int> vec;
        cin >> numOfCoins;
        for(int i = 0; i < numOfCoins; i++) {
            int value;
            cin >> value;
            vec.push_back(value);
        }
        double mean = 0;

        for(int i = 0; i < numOfCoins; i++)
            mean += vec[i];

        mean = mean/numOfCoins;
        for(int i = 0; i < numOfCoins; i++) {
            if(vec[i] == mean) {
                cout << i+1 << endl;
                isPossible = true;
                break;
            }
        }

        if (!isPossible)
            cout << "Impossible" << endl;
    }
    return 0;
}
