#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};

const long long sz = 1e5+1;
long long n,e,u,v,w,dis[sz],par[sz];
vector <GP> G[sz];
bool vis[sz];
priority_queue <GP> PQ;
vector <int> path;

int DJ(int st)
{
    PQ.push({st,0});
    dis[st] = 0;
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        // cout << node << " " << dis[node] << "\n";
        PQ.pop();
        if (node == n)
        {
            int tmp = node;
            // cout << node << " " << dis[node] << "\n";
            while (node != par[node])
            {
                path.push_back(node);
                node = par[node];
            }
            path.push_back(node);
            reverse(path.begin(),path.end());
            return dis[tmp];
        }
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for(auto [nxt,nw]:G[node])
        {
            // cout << nxt << "\n";
            if (dis[nxt] > nw + dis[node])
            {
                dis[nxt] = nw + dis[node];
                par[nxt] = node;
                PQ.push({nxt,dis[nxt]});
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    fill(dis,dis+sz,INT_MAX);
    for (int i = 0; i <= n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        G[u].push_back({v,1});
        G[v].push_back({u,1});
    }
    int ans = DJ(1);
    if (ans == -1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << path.size() << "\n";
    for(auto i:path)
    {
        cout << i << " ";
    }
    return 0;
}