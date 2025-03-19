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
int n,e,u,v,w,d1,d2;
vector <GP> G[sz];
priority_queue <GP> PQ;

template <size_t R>
void DJ(int (&vis)[R],int (&dis)[R],int st)
{
    fill(vis,vis+R,0);
    fill(dis,dis+R,INT_MAX);
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
    cin >> n >> e >> d1 >> d2;
    d1--;
    d2--;
    int vis[sz],dis1[sz],dis2[sz];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    DJ(vis,dis1,d1);
    DJ(vis,dis2,d2);
    for (int i = 0; i < n; i++)
    {
        cout << dis1[i] << " ";
        cout << dis2[i] << "\n";
    }
    return 0;
}