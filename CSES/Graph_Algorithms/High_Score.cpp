#include <bits/stdc++.h>
using namespace std;

struct ED
{
    long long u, v, w;
};

const long long sz = 2501;
long long dis[sz];
long long n, e, u, v, w;
vector<ED> ed;
vector<long long> adj[sz];
bool vis[sz];

void dfs(long long u)
{
    vis[u] = true;
    for (long long v : adj[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

bool BMF(long long st)
{
    dis[st] = 0;
    for (long long i = 0; i < n; i++)
    {
        for (auto [u, v, w] : ed)
        {
            if (dis[u] != LLONG_MIN && dis[v] < dis[u] + w)
            {
                dis[v] = dis[u] + w;
                if (i == n - 1)
                {
                    fill(vis, vis + sz, false);
                    for (auto [u2, v2, w2] : ed)
                    {
                        if (dis[u2] != LLONG_MIN && dis[v2] < dis[u2] + w2)
                        {
                            dfs(v2);
                        }
                    }
                    if (vis[n - 1])
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dis, dis + sz, LLONG_MIN);
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        ed.push_back({u, v, w});
        adj[u].push_back(v);
    }
    if (BMF(0))
    {
        cout << -1;
        return 0;
    }
    cout << dis[n - 1];
    return 0;
}
