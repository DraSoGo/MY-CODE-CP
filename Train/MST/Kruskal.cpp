#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w > w;
    }
};

const int sz = 1e5;
int n,e,u,v,w,ans;
vector <GP> G;
int par[sz],mem[sz];

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
    for(auto [u,v,w]:G)
    {
        int pu = fp(u),pv = fp(v);
        if (pu != pv)
        {
            ans += w;
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
        G.push_back({u,v,w});
    }
    sort(G.begin(),G.end());
    KK();
    cout << ans;
    return 0;
}
/*
INPUT
6 9
0 1 2
1 2 3
1 4 2
2 3 4
1 3 2
3 4 5
4 0 1
0 5 1
5 4 6
OUTPUT
9
*/