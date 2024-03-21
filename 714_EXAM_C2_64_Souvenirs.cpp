#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> G[1001];
priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;
int dist[1001];
bool vis[1001];
int n,e;

int dj(int x,int y)
{
    memset(vis,0,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    PQ.push({0,x});
    dist[x] = 0;
    while (!PQ.empty())
    {
        auto [w,u] = PQ.top();
        PQ.pop();
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
                PQ.push({dist[G[u][i].second],G[u][i].second});
            }
        }
    }
    return dist[y];
}

int main()
{
    int a,b,c,u,v,w;
    cin >> n >> e >> a >> c >> b;
    a--;
    b--;
    c--;
    while (e--)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({w,v});
        G[v].push_back({w,u});
    }
    cout << dj(a,b)+dj(b,c);
}