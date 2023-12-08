#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 1];
        int ans[q], l, r;

        for(int i = 1; i <= n; i++)
            cin >> arr[i];

        for(int i = 1; i <= q; i++)
        {
            cin >> l >> r;
            ans[i] = arr[l];
            for(int j = l + 1; j <= r; j++)
            {
                ans[i] = ans[i] ^ arr[j];
            }
            ans[i] = ans[i] ^ 2147483647; // MAX_INT
        }
        int i = 1;
        while (i <= q) {
            cout << ans[i] << endl;
            i += 1;
        }
    }
    return 0;
}
// use prifix sum
