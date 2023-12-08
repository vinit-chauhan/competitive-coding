#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    int *arr;
    cin >> test;
    arr = (int*)malloc(test * sizeof(int));
    for(int i = 0; i < test; i++)
    {
        int count = 0;
        long int num;
        cin >> num;
        while(num != 0)
        {
            if(num % 2 == 1)
            {
                count += 1;
                num -= 1;
            }
            num = num/2;
            arr[i] = count;
        }
    }
    for(int i = 0; i < test; i++)
        cout << arr[i] << endl;

    return 0;
}
