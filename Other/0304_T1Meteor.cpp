#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};


const int sz = 2e5+1;
int n,e,u,v,w,co;
int par[sz],mem[sz];
priority_queue <GP> PQ;

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
    while (!PQ.empty())
    {
        auto[u,v,w] = PQ.top();
        // cout << u << " " << v << " " << w << "\n";
        int pu = fp(u),pv = fp(v);
        PQ.pop();
        if (pv != pu)
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
            co+=w;
        }
    }
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
        PQ.push({u,v,abs(((u+v)%2)-1)});
    }
    KK();
    co > 0?cout << co:cout << "cheer!";
    return 0;
}