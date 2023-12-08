#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;

    while(n != 0)
    {
        count += 1;
        n = n & (n -1);
    }
    cout << count << " ";

    return 0;
}
