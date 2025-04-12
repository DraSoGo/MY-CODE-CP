#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v,ans,mx;
int par[sz],mem[sz];
queue <pair<int,int>> G;

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
    // cout << G.size() << "\n";
    while (!G.empty())
    {
        auto [u,v] = G.front();
        // cout << u << " " << v << "\n";
        G.pop();
        int pu = fp(u),pv = fp(v);
        if (pu != pv)
        {
            if (mem[pu] >= mem[pv])
            {
                mem[pu] += mem[pv];
                ans -= 1;
                mx = max(mx,mem[pu]);
                mem[pv] = 0;
                par[pv] = pu;
            }
            else
            {
                mem[pv] += mem[pu];
                ans -= 1;
                mx = max(mx,mem[pv]);
                mem[pu] = 0;
                par[pu] = pv;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << par[i] << " ";
        // }
        // cout << "\n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << mem[i] << " ";
        // }
        // cout << "\n";
        cout << ans << " " << mx << "\n";
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    ans = n;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G.push({u,v});
    }
    KK();
    return 0;
}