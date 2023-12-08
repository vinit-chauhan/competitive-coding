#include<iostream>
using namespace std;

int GCD(int x, int y)
{
    int rem = x%y;
    if(rem == 0)
        return y;
    else
        return (GCD(y,rem));
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long int N, K;
        int A, B;
        cin >> N >> A >> B >> K;

        int count;
        int LCM, gcd;
        gcd = GCD(A, B);
        LCM = A*B/gcd;
        count = (N / A) + (N / B);
        count = count - (2 * (N / LCM));

        cout << count << endl;

        if (count >= K)
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
    }
    return 0;
}
