#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};


const int sz = 1e5+1;
int n,e,u,v,ans;
priority_queue <GP> PQ;
int dis[sz],mem[sz],par[sz];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void KK()
{
    while (!PQ.empty())
    {
        auto [u,v,w] = PQ.top();
        int pu = fp(u),pv = fp(v);
        PQ.pop();
        if(pv != pu)
        {
            if (mem[pu] >= mem[pv])
            {
                mem[pu] += mem[pv];
                par[pv] = pu;
            }
            else
            {
                mem[pv] += mem[pu];
                par[pu] = pv;
            }
            ans += w;
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dis[i];
        par[i] = i;
        mem[i] = 1;
    }
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        PQ.push({u,v,dis[u]+dis[v]});
    }
    KK();
    cout << ans;
    return 0;
}