//Dynamic Prog. --> sub-matrix with all 1

#include<iostream>
using namespace std;

int array[8][8];

void matrix_ans(int size)
{
    for(int i = 1; i < size; i++)
    {
        for(int j = 1; j < size; j++)
        {
                if(array[i][j] == 0)
                    array[i][j] = 0;
                else
                    array[i][j] = 1 + min( min(array[i - 1][j], array[i][j - 1]) , array[i - 1][j - 1]);
        }
    }
    
    int max_num = array[0][0];
    cout << endl << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
            max_num = max(max_num, array[i][j]);
        }
        cout << endl;
    }
    cout << "Answer is : " << max_num;
}

int main()
{
    int size;
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
            cin >> array[i][j];
    }
    matrix_ans(size);
    return 0;
}

/*

5
1 0 1 1 0
0 1 1 0 1
1 1 1 1 0
0 1 1 1 1
1 1 1 1 0

*/
