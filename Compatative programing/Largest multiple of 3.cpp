// input is a number check if it is multiple of 3 and than reverse the sorted array;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    int *arr;
    cin >> size;
    arr = (*int)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr,0,size);
    
    return 0;
}
