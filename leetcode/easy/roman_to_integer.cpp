#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Solution
{
    unordered_map<char, int> rtoi = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

public:
    int romanToInt(string s)
    {
        int num = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (rtoi[s[i]] < rtoi[s[i + 1]])
            {
                num -= rtoi[s[i]];
            }
            else
            {
                num += rtoi[s[i]];
            }
        }
        return num;
    }
};

int main(int argc, char *argv[])
{
    Solution solution;
    cout << "Roman to Integer" << endl;
    cout << solution.romanToInt("XIV") << endl;
    return 0;
}
