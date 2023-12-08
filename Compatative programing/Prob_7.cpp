#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int *arrA;
    int size,test;
    cin >> test;
    for(int i=0;i < test; i++)
    {
        unordered_map <int, int> map;
        cin >> size;
        arrA = (long int*)malloc(size * sizeof(long int));
        for(int j=0; j<size ; j++)
        {
            cin >> arrA[j];
            map[arrA[j]] += 1;
        }
        int k = 0;
        while(k < size)
        {
            if ( map[arrA[k]] % 2 != 0 )
            {
                cout << arrA[k] << endl;
                map[arrA[k]] = 0;
            }
        k++;
        }
    }
    return 0;
}
