#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int min_len = INT_MAX;
        string str = "";
        for (int i = 0; i < strs.size(); i++)
        {
            min_len = (min_len > strs[i].length()) ? strs[i].length() : min_len;
        }

        for (int i = 0; i < min_len; i++)
        {
            char ch = strs[0][i];
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != ch)
                    return str;
            }
            str += strs[0][i];
        }

        return str;
    }
};

int main(int argc, char *argv[])
{
    vector<string> cases = {"dogs", "dog", "dos"};
    Solution solution;
    cout << "Longest Common Prefix" << endl;
    cout << solution.longestCommonPrefix(cases) << endl;
    return 0;
}
