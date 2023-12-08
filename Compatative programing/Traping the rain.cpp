#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,test,size;
 int *arr,*arrb,*arrc;
 cin >> test;
 //for(int j = 0; j < test; j++)
 {
    cin >> size;
    arr = (int*)malloc(size * sizeof(int));
    arrb = (int*)malloc(size * sizeof(int));
    arrc = (int*)malloc(size * sizeof(int));
    for(i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int temp;
    temp = arr[0];

    for(i = 0; i < size; i++)
    {
        temp = max(temp, arr[i]);
        arrb[i] = temp - arr[i];
    }
    temp = arr[size - 1];
    for(i = size - 1; i >= 0; i--)
    {
        temp = max(temp, arr[i]);
        arrc[i] = temp - arr[i];
    }
    int ans = 0;
    for(i = 0; i < size; i++)
    {
        temp = min(arrb[i],arrc[i]);
        ans += temp;
    }
    cout << ans << endl;
}
    return 0;
}
