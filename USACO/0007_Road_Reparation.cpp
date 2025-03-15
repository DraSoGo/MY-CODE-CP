#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};

const long long sz = 2e5+1;
long long n,e,u,v,w,ans,nn;
priority_queue <GP> PQ;
long long mem[sz],par[sz];

long long fp(long long x)
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
        long long pu = fp(u),pv = fp(v);
        PQ.pop();
        if (pu != pv)
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
            nn++;
            ans += w;
        }
        
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> e;
    for (long long i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        PQ.push({u,v,w});
    }
    KK();
    // cout << nn << "\n";
    nn == n-1?cout << ans:cout << "IMPOSSIBLE";
    return 0;
}