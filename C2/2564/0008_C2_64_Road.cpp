#include <bits/stdc++.h>
using namespace std;

struct road
{
    long long u;
    long long v;
    long long w;
    bool operator < (const road & b)const
    {
        return w > b.w;
    }
};

priority_queue <road> PQ;
vector <road> V;
long long par[200001];
long long mem[200001];
long long ans = 0;

long long fp(long long x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}


void KK(long long a,long long b,long long c)
{
    if (fp(a) != fp(b))
    {
        if (mem[par[a]] > mem[par[b]])
        {
            mem[par[a]] += mem[par[b]];
            par[par[b]] = par[a];
        }
        else
        {
            mem[par[b]] += mem[par[a]];
            par[par[a]] = par[b];
        }
        ans += c;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    memset(mem,1,sizeof(mem));
    long long n,e,u,v,w,k;
    cin >> n >> e;
    for (long long i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        PQ.push({u-1,v-1,w});
    }
    cin >> k;
    for (long long i = 0; i < k; i++)
    {
        cin >> u >> v >> w;
        V.push_back({u-1,v-1,w});
    }
    for (long long i = 0; i < k; i++)
    {
        KK(V[i].u,V[i].v,V[i].w);
    }
    for (long long i = 0; i < e; i++)
    {
        KK(PQ.top().u,PQ.top().v,PQ.top().w);
        PQ.pop();
    }
    cout << ans;
    return false;
}