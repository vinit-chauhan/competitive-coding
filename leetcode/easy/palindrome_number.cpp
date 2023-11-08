#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long temp = x;
        long reverse = 0;
        do
        {
            reverse = reverse * 10 + (temp % 10);
            temp = temp / 10;
        } while (temp != 0);

        return (x == reverse);
    }
};

int main(int argc, char *argv[])
{
    Solution solution;
    cout << "Palindrome Number" << endl;
    cout << solution.isPalindrome(121) << endl;
    cout << solution.isPalindrome(-121) << endl;
    cout << solution.isPalindrome(10) << endl;
    return 0;
}