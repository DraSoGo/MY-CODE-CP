#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+1;
int n,e,u,v,q;
queue <pair<int,int>> Q;
int par[sz],mem[sz];
bool cyc[sz];

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
    int d = 1;
    while (!Q.empty())
    {
        auto [u,v] = Q.front();
        Q.pop();
        int pu = fp(u),pv = fp(v);
        if (pu != pv)
        {
            /* code */
        }
        else
        {
            cyc[d] = 1;
        }
        
        d++;
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> q;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        Q.push({u,v});
    }
    
    return 0;
}