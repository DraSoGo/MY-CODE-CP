#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w > w;
    }
};

const long long sz = 1e6;
bool vis[sz];
long long par[sz],mem[sz],num[sz];
long long n,e,u,v,w,ans;
vector <long long> P;
vector <GP> V;

long long fp(long long x)
{
    if(x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void KK()
{
    for(auto [u,v,w]:V)
    {
        long long pu = fp(u),pv = fp(v);
        // cout << pu << " " << pv << "\n";
        if (pu != pv)
        {
            // cout << u+1 << " " << v+1 << " " << w << "\n";
            ans += w;
            if (mem[pu] > mem[pv])
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
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vis[0] = 1;
    vis[1] = 0;
    for (long long i = 2; i < sz; i++)
    {
        if (!vis[i])
        {
            P.push_back(i);
            for (long long j = i+i; j < sz; j+=i)
            {
                vis[j] = 1;
            }
        }
    }
    for (long long i = 0; i < P.size(); i++)
    {
        long long idx = 1;
        for (long long j = 1; j < sz; j++)
        {
            idx *= P[i];
            if (idx > sz)
            {
                break;
            }
            num[idx] = j+1;
            // cout << idx << " " << num[idx] << "\n";
        }
    }
    cin >> n >> e;
    for (long long i = 0; i < n; i++)
    {
        mem[i] = 1;
        par[i] = i;
    }
    
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        num[w] != 0?w = num[w]:w = w;
        // cout << u << " " << v << " " << w << "\n";
        u--;
        v--;
        V.push_back({u,v,w});
    }
    // cout << "\n";
    sort(V.begin(),V.end());
    KK();
    cout << ans;
    return 0;
}