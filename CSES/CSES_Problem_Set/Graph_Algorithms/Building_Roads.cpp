#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v,co,coe;
int par[sz],mem[sz];
vector <pair<int,int>> V;

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

bool KK(int u,int v)
{
    int pu = fp(u),pv = fp(v);
    // int pu = u,pv = v;
    if (pu != pv)
    {
        if (mem[pv] > mem[pu])
        {
            mem[pv] += mem[pu];
            par[pu] = pv;
            mem[pu] = 0;
        }
        else
        {
            mem[pu] += mem[pv];
            par[pv] = pu;
            mem[pv] = 0;
        }
        coe++;
        return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        mem[i] = 1;
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--,v--;
        KK(u,v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (KK(i,j))
            {
                co++;
                V.push_back({i,j});
                if (coe == n-1)
                {
                    break;
                }
            }
            if (coe == n-1)
            {
                break;
            }
        }
    }
    cout << co << "\n";
    for(auto [u,v] :V)
    {
        cout << u+1 << " " << v+1 << "\n";
    }
    return 0;
}