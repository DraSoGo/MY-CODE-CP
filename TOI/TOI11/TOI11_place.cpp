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
long long n,e,u,v,w,par[sz],mem[sz],ans;
vector <GP> V;

int fp(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void KK()
{
    for (auto [u,v,w] : V)
    {
        int pu = fp(u),pv = fp(v);
        if (pu != pv)
        {
            ans += w;
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
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        w--;
        V.push_back({u,v,w});
    }
    sort(V.begin(),V.end());
    KK();
    cout << ans;
    return 0;
}