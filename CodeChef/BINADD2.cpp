#include<bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;

int[] lengthEqualizer(string s, int lengthOfOther) {
    int temp[];
    int lenDiff = lengthOfOther - s.size();

    for(int i = 0; i < lenDiff; i++)
        temp[i] = 0;
    for(int i = lenDiff; i < lengthOfOther; i++)
        temp[i] = (s[i - lenDiff] == '0')?0:1;
    //might cause problem

    return temp;
}

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while(test--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int S1[s1.size()];
        int S2[s2.size()];

        if(s1.size() > s2.size()) {
            for(int i = 0; i < s1.size(); i++) {
                if(s1[i] == '0')
                    S1[i] = 0;
                else
                    S1[i] = 1;
            }
            S2 = lengthEqualizer(s2, s1.size());
        }
        else if(s1.size() < s2.size()){
            S1 = lengthEqualizer(s1, s2.size());
            for(int i = 0; i < s2.size(); i++) {
                if(s2[i] == '0')
                    S2[i] = 0;
                else
                    S2[i] = 1;
            }
         }

        for(int i = 0; i < s1.size(); i++) {

        }

    }
    return 0;
}
