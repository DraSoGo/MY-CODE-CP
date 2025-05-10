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

const int sz = 1e5+10;
int n,e,u,v,w,a,b;
vector <GP> G[sz];
priority_queue <GP> PQ;
bool vis[sz];
int dis[sz];

int DJ(int st,int ed)
{
    dis[st] = 0;
    PQ.push({st,0});
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for (auto [nxt,nw]:G[node])
        {
            if (dis[nxt] > dis[node] + nw)
            {
                dis[nxt] = dis[node] + nw;
                PQ.push({nxt,dis[nxt]});
            }
        }
    }
    return dis[ed];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> a >> b;
    fill(dis,dis+sz,INT_MAX);
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    cout << DJ(a,b);
    return 0;
}
/*
INPUT
5 8 0 2
0 1 2
1 2 6
1 4 3
4 2 1
3 2 5
0 3 10
5 3 4
0 5 1
OUTPUT
6 
*/