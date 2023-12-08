#include<iostream>
using namespace std;

int main()
{
    int test, j = 1;
    cin >> test;
    int ans[test + 1];
    while(j <= test)
    {
        int n, count = 0;
        cin >> n;
        int arr[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        for(int i = 1; i <= n; i++)
        {
            if(arr[arr[i]] == i)
                count++;
        }
        ans[j] = n - count;
        j++;
    }
    for(int i = 1; i <= test; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
