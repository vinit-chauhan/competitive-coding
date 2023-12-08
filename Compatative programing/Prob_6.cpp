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
        int size,sum,i;
        unordered_map <int, int> map;
        bool flag = 1;
        cin >> size >> sum;
        arr = (int*)calloc(size,sizeof(int));
        for(i = 0; i < size; i++)
        {
            cin >> arr[i];
            map[arr[i]] += 1;
        }
        for(i = 0; i < size; i++)
        {
            int sec = sum - arr[i];
            if(arr[i] != sec)
            {
                if(map[sec] > 0)
                 {
                    flag = 0;
                    break;
                 }
            }
            else if(arr[i] == sec)
            {
                if(map[sec] > 1)
                 {
                    flag = 0;
                    break;
                 }
            }


 /*           if(map[sec] > 0 )
            {
                //cout << "YES" << endl;
                    flag = 0;
                if(sec == arr[i] && map[sec] < 2)
                {
                    flag = 1;
                }
                break;
            }
            if(flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            if(!flag)
                break;   */
        }
        if(flag)
            cout << "NO" << endl;
    }
    return 0;
}
