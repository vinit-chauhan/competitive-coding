#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;


int add(int A,int B) {
    int count = 0;
    while(B) {
        int U = A ^ B;
        int V = A & B;
        A = U;
        B = V * 2;
        count++;
    }
    cout << "count : " << count << endl;
    return A;
}

int main() {
    ios::sync_with_stdio(0);
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int a = stoi(s1, 0, 2);
    int b = stoi(s2, 0, 2);

    add(a, b);
    return 0;
}
