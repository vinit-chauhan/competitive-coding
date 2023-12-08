#include<bits/stdc++.h>

#define debug(x) cerr << #x << " : " << x << endl;

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int test;
    cin >> test;
    while(test--) {
        int n = 0;
        int winC = 0,
            winM = 0,
            crdC = 0,
            crdM = 0;
        cin >> n;
        while(n--) {
            int temp;
            cin >> temp;
            do {
                crdC += temp % 10;
                temp /= 10;
            } while(temp > 0);


            cin >> temp;
            do {
                crdM += temp % 10;
                temp /= 10;
            } while(temp > 0);

            if(crdC == crdM) {
                winC++;
                winM++;
            } else if(crdC > crdM) {
                winC++;
            } else {
                winM++;
            }

            crdC = 0;
            crdM = 0;
        }

        if(winC == winM) {
            cout << "2 " << winC << endl;
        } else if (winC > winM) {
            cout << "0 " << winC << endl;
        } else{
            cout << "1 " << winM << endl;
        }
    }
    return 0;
}
