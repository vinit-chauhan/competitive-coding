#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;

string lengthEqualizer(string s, int lengthOfOther) {
    string temp = "";
    int lenDiff = lengthOfOther - s.size();

    for(int i = 0; i < lenDiff; i++)
        temp += '0';
    for(int i = lenDiff; i < lengthOfOther; i++)
        temp += s[i - lenDiff];
    return temp;
}

string andfunc(string x, string y) {
    string temp = "";
    for(int i = 0; i < x.size(); i++) {
        if(x[i] == '1' && y[i] == '1')
            temp += '1';
        else
            temp += '0';
    }
    return temp;
}

string xorfunc(string x, string y) {
    string temp = "";
    for(int i = 0; i < x.size(); i++) {
        if(x[i] == y[i])
            temp += '0';
        else
            temp += '1';
    }
    return temp;
}

string mulBy2(string s) {
    char carry = '0';
    char temp;
    for(int i = s.size() - 1; i >= 0; i--) {
        temp = carry;
        carry = s[i];
        s[i] = temp;
    }
    if(carry == '1') {
        string final = '1' + s;
    } else {
        return s;
    }

}

void add(string A,string B) {
    bool isBZero = false;
    int count = 0;

    for(int i = 0; i < B.size(); i++) {
        if(B[i] != '0'){
            isBZero = false;
            break;
        }
        else {
            isBZero = true;
        }
    }

    while(!isBZero) {
        string U = xorfunc(A, B);
        string V = andfunc(A, B);
        A = U;
        B = mulBy2(V);
        count++;

        for(int i = 0; i < B.size(); i++) {
            if(B[i] != '0'){
                isBZero = false;
                break;
            }
            else
                isBZero = true;
        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while(test--) {
        string S1, S2;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        // Equals the length of strings
        if(s1.size() > s2.size()) {
            S1 = s1;
            S2 = lengthEqualizer(s2, s1.size());
        }
        else if(s1.size() < s2.size()){
            S1 = lengthEqualizer(s1, s2.size());
            S2 = s2;
        }
        //add function
        add(S1, S2);
    }
    return 0;
}
