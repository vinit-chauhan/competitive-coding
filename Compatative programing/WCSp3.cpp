// prob 3 --> even = sum of 2 prime numbers
// odd = sum of 3 prime numbers ---- if N - 2 != prime
//                                      else
//                                      odd = sum of 2 prime numbers.
#include<iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    int num[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> num[i];
        if (num[i] > max)
            max = num[i];
    }

    int prime[max + 1] = {0};
    for(int i = 2; i <= max; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*2; j <= max; j += i)
                prime[j] = 1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(num[i] > 0 && num[i] < 4)
            cout << -1 << endl;
        else if(num[i] % 2 == 0)
            cout << 1 << endl;
        else
            {
                if(prime[num[i] - 2] == 0)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
    }

    return 0;
}
