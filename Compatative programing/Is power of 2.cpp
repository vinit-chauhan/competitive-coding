#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;

    if (n != 0 && (n & (n - 1)) == 0)
        cout << n << " is power of 2.";
    else
        cout << n << " is not power of 2.";
    return 0;
}
