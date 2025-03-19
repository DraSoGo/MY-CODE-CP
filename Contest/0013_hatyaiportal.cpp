#include <bits/stdc++.h>
using namespace std;

struct pos
{
    long long x,y;
};

struct GP
{
    long long v,w;
    bool operator < (const GP & a)const
    {
        return a.w < w;
    }
};

const long long sz = 1e5;
long long n,e,x,y,ans;
vector <pos> V;
vector <GP> G[sz];
queue <GP> PQ;
long long dis[sz],vis[sz];

void prim(long long st)
{
    PQ.push({st,0});
    while (!PQ.empty())
    {
        auto [node,w] = PQ.front();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        ans += w;
        long long nv;
        long long mn = LLONG_MAX;
        for(auto [nxt,nw]:G[node])
        {
            if (vis[nxt])
            {
                continue;
            }
            dis[nxt] = min(dis[nxt], nw);
            if (dis[nxt] < mn)
            {
                nv = nxt;
                mn = dis[nxt];
                // dis[nxt] = nw;
            }
        }
        PQ.push({nv,dis[nv]});
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dis,dis+sz,LLONG_MAX);
    cin >> e;
    for (long long i = 0; i < e; i++)
    {
        cin >> x >> y;
        for (long long j = 0; j < V.size(); j++)
        {
            G[i].push_back({j,abs(x-V[j].x)+abs(y-V[j].y)});
            G[j].push_back({i,abs(x-V[j].x)+abs(y-V[j].y)});
        }
        V.push_back({x,y});
    }
    prim(0);
    cout << ans;
    // for (long long i = 0; i < e; i++)
    // {
    //     cout << i << ": ";
    //     for(auto [nxt,w] :G[i])
    //     {
    //         cout << nxt << "," << w << " ";
    //     }
    //     cout << "\n";
    // }
   return 0;
}