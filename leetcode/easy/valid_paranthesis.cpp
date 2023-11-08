#include <iostream>
#include <stack>
using namespace std;

class Solution
{

public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                continue;
            }
            char ch = st.top();
            if (ch == '(' && s[i] == ')' || ch == '{' && s[i] == '}' || ch == '[' && s[i] == ']')
            {
                if (st.empty())
                    return false;
                else
                    st.pop();
            }
            else
                st.push(s[i]);
        }

        return (st.size() == 0);
    }
};

int main()
{
    Solution solution;

    cout << solution.isValid("{{}}}}{{}{}}") << endl;
    cout << solution.isValid("(]") << endl;
    cout << solution.isValid("()") << endl;
    cout << solution.isValid("([)]") << endl;

    return 0;
}