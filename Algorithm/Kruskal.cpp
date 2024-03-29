#include <bits/stdc++.h>
using namespace std;


struct GP
{
    int u;
    int v;
    int w;
    bool operator < (const GP & x) const
    {
        return w > x.w;
    }
};

int n,e,par[1001],mem[1001],ans = 0;
priority_queue <GP> PQ;

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

int KK()
{
    while (!PQ.empty())
    {
        int u = PQ.top().u,v = PQ.top().v,w = PQ.top().w;
        if (fp(u) != fp(v))
        {
            if (mem[u] >= mem[v])
            {
                mem[par[u]] += mem[par[v]];
                par[par[v]] = par[u];
            }
            else
            {
                mem[par[v]] += mem[par[u]];
                par[par[u]] = par[v];
            }
            ans += w;
        }
        PQ.pop();
    }
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int u,v,w;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        PQ.push({u,v,w});
    }
    KK();
    cout << ans;
    // for (int i = 0; i < e; i++)
    // {
    //     cout << PQ.top().u << " " << PQ.top().v << " " << PQ.top().w << "\n";
    //     PQ.pop();
    // }
    return 0;
}