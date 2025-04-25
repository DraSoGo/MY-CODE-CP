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

struct Q
{
    int k,v,idx;
    bool operator < (const Q&a)const
    {
        return k > a.k;
    }
};

const int sz = 1e5+10;
int n,e,u,v,w,q,k;
vector <GP> G;
vector <Q> QR;
int mem[sz],par[sz];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void uni(int u,int v)
{
    u = fp(u),v = fp(v);
    if (u == v)
    {
        return;
    }
    mem[u] += mem[v];
    par[v] = u;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream fin("mootube.in");
    ofstream fout("mootube.out");
    fin >> n >> q;
    int ans[q];
    e = n-1;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    
    for (int i = 0; i < e; i++)
    {
        fin >> u >> v >> w;
        u--,v--;
        G.push_back({u,v,w});
    }
    for (int i = 0; i < q; i++)
    {
        fin >> k >> v;
        v--;
        QR.push_back({k,v,i});
    }
    sort(G.begin(),G.end());
    sort(QR.begin(),QR.end());
    int j = 0;
    for (int i = 0; i < q; i++)
    {
        while (j < e && G[j].w >= QR[i].k)
        {
            uni(G[j].u,G[j].v);
            j++;
        }
        ans[QR[i].idx] = mem[fp(QR[i].v)]-1;
    }
    for (int i = 0; i < q; i++)
    {
        fout << ans[i] << "\n";
    }
    
    return 0;
}