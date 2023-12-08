#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int, int> map;
    int size,q,i,num;
    //int *array;
    vector<int> array;
    cin >> size >> q;
    //array = (int*)malloc(size*sizeof(int));
    for(i = 0; i < size; i++ )
    {
        cin >> num;
        array.push_back(num);
        //cin >> array[i];
        map[array[i]]++;
    }
    int consarr[q];
    for(i = 0 ; i < q ; i++)
    {
        cin >> consarr[i];
    }
    for(i=0; i< q ; i++)
    {
        consarr[i] = map[consarr[i]];
        cout << consarr[i] << endl ;
    }
    return 0;
}
