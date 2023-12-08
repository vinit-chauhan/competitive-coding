#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test ;
    cin >> test;
    while(test --)
    {
        int size,i;
        long long int *arr, *arr2;
        cin >> size;
        arr = (long long int*)malloc(size*sizeof(long long int));
        arr2 = (long long int*)malloc(size*sizeof(long long int));
        for(i = 0; i < size; i++)
            cin >> arr[i];
        const long long int m = 1000000007;
        arr2[0] = arr[0];
        for(i = 1; i < size; i++)
        {
            long long int j = 1;
            j = (j * arr[i])%m;
            j = (j * arr2[i - 1])%m;
            arr2[i] = j;
        }

        cout << endl;
        for(i = size - 2; i >= 0; i--)
        {
            long long int j = 1;
            j = (j * arr[i])%m;
            j = (j * arr[i + 1])%m;
            arr[i] = j;
        }

        for(i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
        for(i = 0; i < size; i++)
            cout << arr2[i] << " ";
        cout << endl;



        cout << arr[1] << " ";

        for(i = 1; i < size - 1; i++)
        {
            long long int j = 1;
            j = (j * arr2[i - 1]) % m;
            j = (j * arr[i + 1]) % m;
            cout << j << " ";
        }

        cout << arr2[size - 2];
    }
    return 0;
}
