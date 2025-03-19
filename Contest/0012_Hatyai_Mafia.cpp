#include <bits/stdc++.h>
using namespace std;
 
struct GP
{
    long long u,v;
};

struct MF
{
    long long v,w;
    bool operator < (const MF&a)const
    {
        return a.w < w;
    }
};


const long long sz = 2e6+1;
long long mem[sz],par[sz],n,e,u,v;
queue <GP> Q;

long long fp(long long x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void un()
{
    while (!Q.empty())
    {
        auto [u,v] = Q.front();
        long long pu = fp(u),pv = fp(v);
        Q.pop();
        if (pu != pv)
        {
            if (mem[pu] >= mem[pv])
            {
                mem[pu] += mem[pv];
                mem[pv] = 0;
                par[pv] = pu;
            }
            else
            {
                mem[pv] += mem[pu];
                mem[pu] = 0;
                par[pu] = pv;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (long long i = 0; i < n; i++)
    {
        mem[i] = 1;
        par[i] = i;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        Q.push({u,v});
    }
    un();
    vector <MF> V;
    long long x = 0;
    for (long long i = 0; i < n; i++)
    {
        if (mem[i] != 0)
        {
            x++;
        }
        V.push_back({par[i],mem[i]});
    }
    sort(V.begin(),V.end());
    cout << x << "\n";
    for (long long i = 0; i < n; i++)
    {
        if (V[i].w == 0)
        {
            break;
        }
        cout << V[i].w << " ";
    }
    // for (long long i = 0; i < n; i++)
    // {
    //     cout << par[i] << " ";
    // }
    // cout << "\n";
    // for (long long i = 0; i < n; i++)
    // {
    //     cout << mem[i] << " ";
    // }
    
    return 0;
}