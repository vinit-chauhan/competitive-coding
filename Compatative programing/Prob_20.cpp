#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size, i;
        int *arr;
        cin >> size;
        arr = (int*)calloc(size,sizeof(int));
        for(i = 0; i < size; i++)
            cin >> arr[i];
        sort(arr, arr + size);
        int np = 1;
        for(i = 0; i < size; i++)
        {
            if(arr[i] <= np)
                np += arr[i];
            else
            {
                break;
            }
        }
        cout << np << endl;
    }
    return 0;
}
