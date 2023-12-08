#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s;
    cin >> n >> m >> s;

    vector<int> nodes[n + 1];

    for(int i = 0;i < m; i++)
    {
        int u, v;
        cin >> u;
        cin >> v;
        nodes[u].push_back(v);
        nodes[v].push_back(u);
    //    cout << "In The Loop 1" << '\n';
    }
// to print edges
    for(int i = 1; i < n + 1; i++)
    {
        vector<int> temp = nodes[i];
        for(int j = 0; j < temp.size(); j++)
        {
            cout << temp[j] << " ";
        }
        cout << endl;
    }
    int visited[n + 1] = {0};
    queue <int> que;
    /* Explore --> Queue && Visit --> Array
    when value is encountered if in array its value is than put 1 in visited and keep it in queue else skip*/
    que.push(s);
    visited[s] = 1;
    int t = que.front();
    while(que.size() > 0)
    {
        int u = que.front();
        cout << u << " ";
        que.pop();
        vector<int> temp = nodes[u];
        for(int k = 0;k < temp.size(); k++)
        {
            if (visited[temp[k]] == 0)
            {
                visited[temp[k]] = 1;
                que.push(temp[k]);
            }
        }
    }
    for(int i = 1; i < n + 1; i++)
        cout << visited[i];
    return 0;
}
