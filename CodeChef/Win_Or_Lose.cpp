#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int N;
        cin >> N;
        int Player[N], Villain[N], i = 0;
        while(i < N) {
            cin >> Villain[i++];
        }
        i = 0;
        while (i < N) {
            cin >> Player[i++];
        }

        sort(Player,Player + N);
        sort(Villain, Villain + N);

        int Result = 0;
        i = 0;
        while(i < N) {
            if(Player[i] > Villain[i]) {
                Result += 1;
            }
            i += 1;
        }
        if(Result == N)
            cout << "WIN" << endl;
        else
            cout << "LOSE" << endl;
    }
    return 0;
}

// 1
// 6
// 112 243 512 343 90 478
// 500 789 234 400 452 150



    // for(i = 0; i < N; i++)
    //     cout << "Player : " << Player[i] << endl;
    //
    // for(i = 0; i < N; i++)
    //     cout << "Villain : " << Villain[i] << endl;
    // cout << "Result : " << Result << endl;
