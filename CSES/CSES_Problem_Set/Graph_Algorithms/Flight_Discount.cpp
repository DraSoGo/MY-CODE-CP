#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long v,w,t;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};


const int sz = 1e5+1;
long long n,e,u,v,w,dis[sz][2];
bool vis[sz][2];
vector <GP> G[sz];
priority_queue <GP> PQ;

void DJ(int st)
{
    PQ.push({st,0,1});
    dis[st][1] = 0;
    while (!PQ.empty())
    {
        auto [node,w,t] = PQ.top();
        PQ.pop();
        if (vis[node][t])
        {
            continue;
        }
        vis[node][t] = 1;
        if (t == 1)
        {
            for(auto [nxt,nw,nt] : G[node])
            {
                if (dis[nxt][0] > (nw/2)+dis[node][1])
                {
                    dis[nxt][0] = (nw/2)+dis[node][1];
                    PQ.push({nxt,dis[nxt][0],0});
                }
            }
        }
        for(auto [nxt,nw,nt] : G[node])
        {
            if (dis[nxt][t] > nw+dis[node][t])
            {
                dis[nxt][t] = nw+dis[node][t];
                PQ.push({nxt,dis[nxt][t],t});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        dis[i][0] = LLONG_MAX;
        dis[i][1] = LLONG_MAX;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w,1});
        G[v].push_back({v,w,1});
    }
    DJ(0);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dis[i][0] << " ";
    //     cout << dis[i][1] << "\n";
    // }
    
    cout << dis[n-1][0];
    return 0;
}
