#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace boost::multiprecision;
using boost::multiprecision::cpp_dec_float_50;

#define debug(x) cerr << #x << " : " << x << endl;

bool isVowel(char ch) {
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

cpp_dec_float_50 power(cpp_dec_float_50 x, cpp_dec_float_50 fX, cpp_dec_float_50 k) {
    cpp_dec_float_50 answer = x;
    for(int i = 0; i < k; i++) {
        answer /= fX;
    }
    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;

        int occurenceAlice[26] = {0},
            occurenceBob[26] = {0},
            arrayAlice[26] = {0},
            arrayBob[26] = {0};

        int countAlice = 0,
            countBob = 0;
        double finalRatio = 0;

        cpp_dec_float_50 ratioAlice = 1,
               ratioBob = 1,
               numAlice = 1, denoAlice = 1,
               numBob = 1, denoBob = 1;

        for(int j = 0; j < n; ++j) {
            int temp[26] = {0};
            bool isAlice = true;
            int count = 0;

            string str;
            cin >> str;

            for(int i = 0; i < str.size(); i++) {
                if(isVowel(str[i])) { //It's Vowel
                    count--;    // reduce countdown by 1
                } else {    //It's Consonent
                    if(count <= 0) // if true that means that more than 2 Vowel in-between Consonent
                        count = 2; // set countdown to 2
                    else {
                        isAlice = false;
                    }
                }
                temp[str[i] - 'a'] += 1;
            }

            if(isAlice) {
                countAlice += 1;
                for(int i = 0; i < 26; ++i) {
                    occurenceAlice[i] += temp[i];
                    if(temp[i] > 0) arrayAlice[i] += 1;
                }
            } else {
                countBob += 1;
                for(int i = 0; i < 26; ++i) {
                    occurenceBob[i] += temp[i];
                    if(temp[i] > 0) arrayBob[i] += 1;
                }
            }

        }
//ratios for alice and bob
        for(int i = 0; i < 26; ++i) {
            //ratioAlice
            if(arrayAlice[i] != 0){
            	numAlice *= arrayAlice[i];
                denoAlice *= occurenceAlice[i];
            }
            //ratioBob
            if(arrayBob[i] != 0) {
            	numBob *= arrayBob[i];
                denoBob *= occurenceBob[i];
            }
        }

        ratioAlice = power(numAlice, denoAlice, countAlice);
        ratioBob = power(numBob, denoBob, countBob);

//calculating final ratio
        finalRatio = (double)(ratioAlice / ratioBob);
//Final Print Statement
        if (finalRatio <= 10000000)
            printf("%.9f\n", finalRatio);
         else
            printf("Infinity\n");
    }
    return 0;
}
