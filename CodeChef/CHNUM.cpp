#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int count_n = 0, count_p = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= 0)
                count_p++;
            else
                count_n++;
        }
        if(count_n == 0)
            cout << count_p << " " << count_p << endl;
        else if (count_p == 0)
            cout << count_n << " " << count_n << endl;
        else
            cout << max(count_n, count_p) << " " << min(count_p, count_n) << endl;
    }
    return 0;
}
