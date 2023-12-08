#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,i;
    int *arrA,*arrB;
    cin >> size;
    arrA = (int*)malloc(size * sizeof(int));
    arrB = (int*)malloc(size* sizeof(int));

    for(i = 0; i < size ; i++)
    {
        cin >> arrA[i];
        arrB[arrA[i] - 1] = i + 1;
    }
    for(i = 0; i < size ; i++)
    {
        cout << arrB[i] << " ";
    }
    return 0;
}
