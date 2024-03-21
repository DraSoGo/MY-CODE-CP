#include <bits/stdc++.h>
using namespace std;

int n,e,a,b;

void DJ(vector <pair<int,int>> G[])
{
    priority_queue<pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;
    int dist[n];
    bool vis[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    memset(vis,0,sizeof(vis));
    dist[a] = 0;
    PQ.push({0,a});
    while (!PQ.empty())
    {
        auto[w,u] = PQ.top();
        PQ.pop();
        if (vis[u])
        {
            continue;
        }
        vis[u] = 1;
        for (int i = 0; i < G[u].size(); i++)
        {
            if (dist[G[u][i].second] > dist[u]+G[u][i].first)
            {
                dist[G[u][i].second] = dist[u]+G[u][i].first;
                PQ.push({dist[G[u][i].second],G[u][i].second});
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dist[i] << " ";
    // }
    cout << dist[b];
}

int main()
{
    int u,v,w;
    cin >> n >> e;
    cin >> a >> b;
    vector<pair<int,int>> G[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u].push_back({w,v});
    }
    DJ(G);
}