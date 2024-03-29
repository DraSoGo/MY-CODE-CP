#include <bits/stdc++.h>
using namespace std;

int dis[1000],n;
bool vis[1000];
priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;

void DJ(int st,vector <pair<int,int>> V[])
{
    memset(vis,0,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    PQ.push({0,st});
    dis[st] = 0;
    while (!PQ.empty())
    {
        auto[w,u] = PQ.top();
        PQ.pop();
        if (vis[u])
        {
            continue;
        }
        vis[u] = 1;
        for (int i = 0; i < V[u].size(); i++)
        {
            if (dis[V[u][i].second] > V[u][i].first + dis[u])
            {
                dis[V[u][i].second] = V[u][i].first + dis[u];
                PQ.push({dis[V[u][i].second],V[u][i].second});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int e,u,v,w;
    cin >> n >> e;
    vector <pair<int,int>> V[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        V[u].push_back({w,v});
        V[v].push_back({w,u});
    }
    for (int i = 0; i < n; i++)
    {
        DJ(i,V);
    }
    
    return 0;
}