#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    unordered_map <int, bool> map;
    cin >> test;
    for(int i = 0; i < test ; i++)
    {
        int size, sum;
        int *arr;
        cin >> size >> sum;
        arr = (int*)malloc(size * sizeof(int));
        for(int j = 0; j < size; j++)
        {
            cin >> arr[j];
            map[arr[j]] += 1;
        }

    int a,b;
    for(j = 0; j < size; j++)
    {
        a = arr[j];
        b = sum - a;
    }

    }
    return 0;
}
