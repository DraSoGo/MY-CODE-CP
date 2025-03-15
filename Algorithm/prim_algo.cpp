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

const int sz = 1e5;
vector <GP> G[sz];
int n,e,u,v,w,ans;
int dis[sz];
bool vis[sz];
priority_queue <GP> PQ;

void prim_algo(int st)
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
        ans += w;
        for(auto [nxt,nw] : G[node])
        {
            // if (!vis[nxt] && nw < dis[nxt])
            // {
            //     vis[nxt] = 1;
            //     dis[nxt] = nw;
            //     PQ.push({nxt,nw});
            // }
            if (nw < dis[nxt])
            {
                // vis[nxt] = 1;
                dis[nxt] = nw;
                PQ.push({nxt,nw});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    fill(dis,dis+sz,INT_MAX);
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    prim_algo(0);
    cout << ans;
    return 0;
}