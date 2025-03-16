#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,w;
    bool operator < (const GP & a)const
    {
        return a.w < w;
    }
};

const int sz = 1e5;
int n,e,u,v,w;
vector <GP> G[sz];
priority_queue <GP> PQ;
int dis[sz],vis[sz];

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
        for(auto [nxt,nw]:G[node])
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dis,dis+sz,INT_MAX);
    cin >> n >> e;
    for (int i = 0; i < e; i++)
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
        cout << dis[i] << " ";
    }
    return 0;
}