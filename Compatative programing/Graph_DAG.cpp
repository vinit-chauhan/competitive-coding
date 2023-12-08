
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> nodes[n + 1];

    for(int i = 0;i < m; i++)
    {
        int u, v;
        cin >> u;
        cin >> v;
        nodes[u].push_back(v);
//        nodes[v].push_back(u);
//        cout << "In The Loop 1" << '\n';
    }
    int arr[n + 1] = {0};
// Counter for the edges....if the value is in {} incremennt value in arr.
    for(int i = 1; i < n + 1; i++)
    {
        vector<int> temp = nodes[i];
        for(int j = 0; j < temp.size(); j++)
        {
            arr[temp[j]] += 1;
            cout << temp[j] << " ";
        }
        cout << endl;
    }
//
    for(int i = 0; i < n ; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            vector <int> temp = nodes[j];
            if(arr[j] == 0)
            {
                cout << j;
                for(int k = 0; k < temp.size(); k++)
                    arr[temp[k]] -= 1;
                arr[j] = -1;
                break;
            }
        }
    }

    return 0;
}
