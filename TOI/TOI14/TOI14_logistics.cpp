#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,f,t,w;
    bool operator < (const GP & a)const
    {
        return a.w < w;
    }
};
struct ADJ
{
    int v,w;
};

const int sz = 101;
int mxf,n,e,u,v,w,s,d;
vector <ADJ> G[sz];
priority_queue <GP> PQ;
int cost[sz],dis[sz][sz][2],vis[sz][sz][2];

void DJ(int st)
{
    PQ.push({s,0,1,0});
    // dis[s][0][1] = 0;
    while (!PQ.empty())
    {
        auto [node,f,t,w] = PQ.top();
        PQ.pop();
        // if (vis[node][f][t])
        // {
        //     continue;
        // }
        // vis[node][f][t] = 1;
        if (f < mxf)
        {
            if (dis[node][f+1][t] > cost[node]+w)
            {
                dis[node][f+1][t] = cost[node]+w;
                PQ.push({node,f+1,t,dis[node][f+1][t]});
            }
        }
        if (t == 1)
        {
            if (dis[node][mxf][0] > w)
            {
                dis[node][mxf][0] = w;
                PQ.push({node,mxf,0,w});
            }
        }
        for(auto [nxt,nw] : G[node])
        {
            if (f >= nw && dis[nxt][f-nw][t] > w)
            {
                dis[nxt][f-nw][t] = w;
                PQ.push({nxt,f-nw,t,w});
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                dis[i][j][k] = 9999999;
            }
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    cin >> s >> d >> mxf;
    s--;
    d--;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    DJ(s);
    cout << dis[d][mxf][0];
    return 0;
}