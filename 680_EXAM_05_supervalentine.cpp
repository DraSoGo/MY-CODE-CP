#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long u;
    long long v;
    long long w;
    bool operator < (const GP & b)const
    {
        return w < b.w;
    }
};


long long fp(long long par[],long long o)
{
    if (par[o] == o)
    {
        return o;
    }
    else
    {
        return par[o] = fp(par,par[o]);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    priority_queue <GP> G;
    long long n,e,x,y,w,ans = 0;
    cin >> n >> e;
    long long par[n],mem[n];
    memset(mem,1,sizeof(mem));
    for (long long i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        G.push({x-1,y-1,w-1});
    }
    for (long long i = 0; i < e; i++)
    {
        long long a = G.top().u,b = G.top().v;
        if (fp(par,a) != fp(par,b))
        {
            if (mem[par[a]] >= mem[par[b]])
            {
                mem[par[a]] += mem[par[b]];
                par[par[b]] = par[a];
            }
            else
            {
                mem[par[b]] += mem[par[a]];
                par[par[a]] = par[b];
            }
            ans += G.top().w;
        }
        G.pop();
    }
    cout << ans;
    return 0;
}