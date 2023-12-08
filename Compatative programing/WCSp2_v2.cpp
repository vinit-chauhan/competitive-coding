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
        int array[n + 1] = {0};
        for(int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            array[i] = array[i - 1] ^ temp;
        }

        int ans[q + 1];
        for(int i = 1; i <= q; i++)
        {
            int l, r;
            cin >> l >> r;
            ans[i] = array[r] ^ array[l - 1] ^ 2147483647;
        }
        int i = 1;
        while (i <= q)
            cout << ans[i++] << endl;
    }
    return 0;
}
