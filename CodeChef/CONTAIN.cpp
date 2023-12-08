#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::vector<std::pair<int, int>> cord, candle;
        int n, c;
        cin >> n >> c;
        std::pair<int, int> temp;
        while (n--)
        {
            cin >> temp.first;
            cin >> temp.second;
            cord.push_back(temp);
        }

        while (c--)
        {
            cin >> temp.first;
            cin >> temp.second;
            candle.push_back(temp);
        }

        

        for (pair<int, int> p : cord)
        {
            printf("%d %d\n", p.first, p.second);
        }
    }
    return 0;
}

/*
1
6 2
0 0
6 0
3 4
2 1
4 1
3 3
6 6
3 3
*/
