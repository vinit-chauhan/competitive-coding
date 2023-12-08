#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int size,pref_sum = 0,suf_sum = 0;

    cin >> size;
    for(int i=0; i < size; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(i = 0; i < size; i++)
    {
        if(v[i] < 0)
            cout << v[i] << endl;
        v[abs(v[i])] * -1;
    }
    return 0;
}
