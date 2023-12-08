#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int probs[12] = {0};
        for(int i = 0; i < n; i++) {
            int problemNumber, obtScore;
            cin >> problemNumber;
            cin >> obtScore;
            if(probs[problemNumber] <= obtScore)
                probs[problemNumber] = obtScore;
        }
        int totalScore = 0;
        for(int i = 0; i <= 8; i++)
            totalScore += probs[i];
        cout << totalScore << endl;
    }
    return 0;
}
