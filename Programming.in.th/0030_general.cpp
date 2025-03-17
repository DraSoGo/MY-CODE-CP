#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v;
};

vector <GP> G;
const int sz = 1e5+1;
int n,e,u,v,x;
int mem[sz],par[sz];

int fp(int x)
{
    if(x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void DSU()
{
    for(auto [u,v]:G)
    {
        int pu = fp(u),pv = fp(v);
        if (pu == pv)
        {
            cout << -1 << "\n";
            continue;
        }
        if (mem[pu] > mem[pv])
        {
            mem[pu] += mem[pv]/2;
            par[pv] = pu;
            cout << pu+1 << "\n";
        }
        else if (mem[pu] < mem[pv])
        {
            mem[pv] += mem[pu]/2;
            par[pu] = pv;
            cout << pv+1 << "\n";
        }
        else
        {
            if (pu < pv)
            {
                mem[pu] += mem[pv]/2;
                par[pv] = pu;
                cout << pu+1 << "\n";
            }
            else
            {
                mem[pv] += mem[pu]/2;
                par[pu] = pv;
                cout << pv+1 << "\n";
            }
            
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mem[i] = x;
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G.push_back({u,v});
    }
    DSU();
    return 0;
}
