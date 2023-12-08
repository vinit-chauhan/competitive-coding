// In this problem there n + 2 numbers are given by user
//WAP which give the numbers which are repeated .....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int size,pref_sum = 0,suf_sum = 0;

    cin >> size;
    int i;
    for(i=0; i < size; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(i = 0; i < size; i++)
    {
        if(v[abs(v[i])] < 0)
        {
            cout << abs(v[i]) << " "; //<< "<<<---- v[" << i << "]" << endl;
           // v[i] = v[i] * -1;
        }
        else
        {
           // cout << v[abs(v[i])] << " <<<==== v[v[" << i << "]]" << endl;
            v[abs(v[i])] = v[abs(v[i])] * -1;
           // cout << v[abs(v[i])] << " <<<==== - v[v[" << i << "]]" << endl;
        }
    }
    return 0;
}
