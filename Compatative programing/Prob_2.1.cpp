#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
 {
    vector<int> v;      // v.size() for size of vector --------------------------
    int n,num,count=0;  // v.accumulate(start_index,end_index,initial_value_of_sum) for sum of values in vector -----------
    cin >> num;
    do{
        cin >> n;
        if(n != -1)
            v.push_back(n);
        count += 1;
    }while(n != -1);
    sort(v.begin(),v.end());
    int i = 0;
    while(i < (int)v.size())
    {
        cout << v[i];
        i += 1;
    }
    cout << "Values : " << v[num - 1];
    return 0;
}
