#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int sum = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            int charASCII = s[i];
            if(charASCII >= 48 && charASCII <= 57)
                sum += charASCII - 48;
        }
        cout << sum << endl;
    }
    return 0;
}
