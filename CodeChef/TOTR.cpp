#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    //takse number of testcase
    int test;
    cin >> test;

    // Takes grammer string
    string str;
    cin >> str;
    int grammerArray[str.length()];
    for(int i = 0; i < str.length(); i++) {
        grammerArray[i] = str[i] - 97;
        cout << "str : " << str[i] << " Grammer :" << (char)grammerArray[i] << endl;
    }

    // now, a = 1, b = 2 ...
    for(int i = 0; i < sizeof(grammerArray)/sizeof(grammerArray[0]); i++)
        cout << (char)(grammerArray[i] + 97) << " ";

    while(test--) {
        string testCase;
        cin >> testCase;
        for(int i = 0; i < testCase.length(); i++) {
            if((int)testCase[i] >= 'a')
                testCase[i] = grammerArray[testCase[i]];
            else
                testCase[i] = grammerArray[testCase[i]] - 32;
        }
        for(int i = 0; i < sizeof(testCase)/sizeof(testCase[0]); i++)
            cout << testCase[i] << " ";
    }
    return 0;
}
