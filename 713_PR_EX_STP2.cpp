#include <bits/stdc++.h>
using namespace std;

int n,e,a,b;
vector <pair<int,int>> G[1001];
vector <int> ans;
priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;
int dist[1001];
int par[1001];
bool vis[1001];

void DJ()
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    PQ.push({0,a});
    dist[a] = 0;
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
                par[G[u][i].second] = u;
                dist[G[u][i].second] = dist[u] + G[u][i].first;
                PQ.push({dist[G[u][i].second],G[u][i].second});
            }
        }
    }
    int x = b;
    while (par[b] != b)
    {
        ans.push_back(b);
        b = par[b];
    }
    cout << a << " ";
    for (int i = ans.size()-1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    cout << dist[x];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    int u,v,w;
    cin >> n >> e >> a >> b;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    while (e--)
    {
        cin >> u >> v >> w;
        G[u].push_back({w,v});
    }
    DJ();
    return 0;
}