#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second > b.second);
}

int find(int x)
{
    if(parent[x] != x)
        parent[x] = find(parent[x]);

    return parent[x];
}

void union(int a, int b);
{
    int x = find(a), y = find(b);
    if(x == y)
        return;
    if(rank[x] > rank[y])
        parent[y] = x;
    else if(rank[y] > rank[x])
        parent[x] = y;
    else
    {
        parent[x] = y;
        rank[x]++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    pair <int, int> p[m];
    pair <int, int> w[m];
    for (int i = 0; i < n; i++)
    {
        int u, v, wi;
        cin >> u >> v >> wi;
        p[i] = make_pair(wi, i);
        w[i] = make_pair(u, v);
        cout << " " << endl;
    }
    //sort(p[0].second, p[m].second, sortbysec);
    sort(w, w + m);
    for (int j = 0; j < m; j++)
    {
        cout << w[j].first << " " << w[j].second << endl;
    }
    return 0;
}


/*
int i = 0, c = 0;
while(c != n-1)
{
    int index;
    index = a[i].second;
    u = p[index].first;
    q = p[index].second;
    if(find(u) == find(v))
        continue;
    min(u, v);
    c += 1;
    ans = ans + w[i].first;
}
*/
