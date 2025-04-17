#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
    bool operator < (const GP&a)const
    {
        return w > a.w;
    }
};

const int sz = 3e3;
int n,e,u,v,w,s,d,p,ans;
int par[sz],mem[sz];
vector <GP> G;

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
    for (auto [u,v,w]:G)
    {
        int pv = fp(v),pu = fp(u);
        if (pv != pu)
        {
            ans = w;
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
        if (fp(s) == fp(d))
        {
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n+1; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G.push_back({u,v,w});
    }
    cin >> s >> d >> p;
    sort(G.begin(),G.end());
    KK();
    ans--;
    cout << ceil(double(p)/ans);
    return 0;
}