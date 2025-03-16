#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};

int const sz = 1e5+2;
int n,u,v,w,mx;
vector <GP> G[sz];
priority_queue <GP> PQ;
bool vis[sz];
int dis[sz];

void DJ(int st)
{
    PQ.push({st,0});
    dis[st] = 0;
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for(auto [nxt,nw] : G[node])
        {
            if (dis[nxt] > dis[node] + nw)
            {
                dis[nxt] = dis[node] + nw;
                PQ.push({nxt,dis[nxt]});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dis,dis+sz,INT_MAX);
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    DJ(0);
    for (int i = 0; i < n; i++)
    {
        // cout << dis[i] << "\n";
        mx = max(mx,dis[i]);
    }
    cout << mx;
    return 0;
}