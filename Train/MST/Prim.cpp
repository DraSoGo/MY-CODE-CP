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
int n,e,u,v,w,ans;
vector <GP> G[sz];
priority_queue <GP> PQ;
int dis[sz],vis[sz];

void Prim(int st)
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
        ans += w;
        for (auto [nxt,nw]:G[node])
        {
            if (dis[nxt] > nw)
            {
                dis[nxt] = nw;
                PQ.push({nxt,nw});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    fill(dis,dis+sz,INT_MAX);
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    Prim(0);
    cout << ans;
    return 0;
}
/*
INPUT
6 9
0 1 2
1 2 3
1 4 2
2 3 4
1 3 2
3 4 5
4 0 1
0 5 1
5 4 6
OUTPUT
9
*/