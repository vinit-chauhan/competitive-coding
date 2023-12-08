#include<iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int m, l;
    l = str1.length();
    m = str2.length();
    int matrix[l + 1][m + 1];

    for(int i = 0; i <= l; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0)
                matrix[i][j] = max(i, j);
            else if(str1[i - 1] == str2[j - 1])
                matrix[i][j] = matrix[i - 1][j - 1];
            else if(str1[i - 1] != str2[j - 1])
            {
                int a, b, c;
                a = 1 + matrix[i][j - 1];
                b = 1 + matrix[i - 1][j];
                c = 1 + matrix[i - 1][j - 1];
                matrix[i][j] = min(a, min(b, c));
            }
        }

    }
    for(int i = 0; i <= l; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
