#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int j = 0; j < test; j++)
    {
        int *arr;
        int size, i,sum,index;
        cin >> size;
        arr = (int*)malloc(size * sizeof(int));
        for(i = 0; i < size; i++)
        {
            cin >> arr[i];
            if(!arr[i])
                arr[i] = -1;
        }
        index = 0;
        for(i = 0; i < size; i++)
        {
            if(max == 0)
                index = i;
            max += arr[i];
        }

    return 0;
}

