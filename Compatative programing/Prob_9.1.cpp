#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int j = 0; j < test; j++)
    {
        int flag = 1;
         unordered_map<long int,int> map;
        long int *arr;
        int test, size, i;
        cin >> size;
        arr = (long int*)malloc(size * sizeof(long int));
        for(i = 0; i < size; i++)
        {
            cin >> arr[i];
            map[arr[i]] = i; //arr[i];
        }
        sort(arr, arr + size);
        for(int k = 0; k < size - 1; k ++)
        {
            for(i = size - 1; i > k; i--)
            {
                if(map[arr[i]] > map[arr[k]])
                {
                   cout << arr[i] - arr[k] << endl;
                    flag = 0;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout << "0" << endl;
    }
    return 0;
}
