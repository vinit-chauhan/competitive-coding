#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int BFS(int StartingNode);
vector<int> nodes[100001];
int visited[100001];
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m ;


    //    vector<int> nodes[n + 1];
    //    vector<int> *v;
    //    v = &nodes;
        for(int i = 0; i < m ; i++)
        {
            int u, v;
            cin >> u;
            cin >> v;
            nodes[u].push_back(v);
            nodes[v].push_back(u);
        //    cout << "In The Loop 1" << '\n';
        }
    // to print edges
        // for(int i = 1; i < n + 1; i++)
        // {
        //     vector<int> temp = nodes[i];
        //     for(int j = 0; j < temp.size(); j++)
        //     {
        //         cout << temp[j] << " ";
        //     }
        //     cout << endl;
        // }
    //    cout << "Pairs are Printed Above...";
    //    int visited[n + 1] = {0};
    //    BSF(s,varr,&v);
        int count = 0;
        std::vector<int> value;

        for(int i = 1; i < n + 1; i++)
        {
    //        cout << visited[i];
            if(visited[i] == 0)
            {
                int val = BFS(i);
                value.push_back(val);
                count++;
            }
        }
        int ans = 1;
        int M = 1000000007;
        for (size_t  i= 0;  i< value.size(); i++)
        {
            ans = ((ans%M)*(value[i]%M))%M;
        }
        cout << count << " " << ans << endl;
        for(int i = 0 ; i < 100001 ; i++) {
            vector<int> tmp;
            nodes[i] = tmp;
            visited[i] = 0;
        }
    }
    return 0;
}

int BFS(int s)
{
    queue <int> que;
    /* Explore --> Queue && Visit --> Array
    when value is encountered if in array its value is than put 1 in visited and keep it in queue else skip*/
    que.push(s);
    visited[s] = 1;
    //int t = que.front();
    int count = 0;
    while(que.size() > 0)
    {
        int u = que.front();
//        cout << u << " ";
        count++;
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
    return count;
}
