#include <bits/stdc++.h>
using namespace std;

int n,e,a,b;

void BF(vector <pair<int,int>> G[])
{
    int dist[n];
    bool ch = 0;
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[a] = 0;
    queue <pair<int,int>> Q;
    for (int l = 0; l < n; l++)
    {
        ch = 0;
        bool vis[n];
        memset(vis,0,sizeof(vis));
        Q.push({0,a});
        while (!Q.empty())
        {
            auto [w,u] = Q.front();
            Q.pop();
            if (vis[u])
            {
                continue;
            }
            vis[u] = 1;
            for (int i = 0; i < G[u].size(); i++)
            {
                if (dist[G[u][i].second] > dist[u] + G[u][i].first)
                {
                    dist[G[u][i].second] = dist[u] + G[u][i].first;
                    ch = 1;
                }
                Q.push({dist[G[u][i].second],G[u][i].second});
            }
        }
    }
    if (ch)
    {
        cout << "ngv";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << " ";
        }
        
    }
}

int main()
{
    int u,v,w;
    cin >> n >> e;
    vector<pair<int,int>> G[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u].push_back({w,v});
    }
    cin >> a;
    BF(G);
}