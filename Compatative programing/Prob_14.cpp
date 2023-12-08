#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test --)
    {
        int size,index,i;
        int *arr,*arr2;
        cin >> size >> index;
        arr = (int*)calloc(size,sizeof(int));
        arr2 = (int*)calloc(index,sizeof(int));
        for(i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        reverse(arr, arr + index - 1);
        for(i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
        reverse(arr + index, arr + size);
        reverse(arr, arr + size);
        for(i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
        for(i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
