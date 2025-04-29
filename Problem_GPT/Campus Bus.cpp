#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,t,c,p;
    bool operator < (const GP&x)const
    {
        return t > x.t;
    }
};

const int sz = 1e5+10;
int n,e,u,v,w,a,b,t,c,p,ans = INT_MAX;
vector <GP> G[sz];
unordered_set <int> vis[sz];
unordered_map <int,int> dis[sz];
priority_queue <GP> PQ;

void DJ()
{
    PQ.push({a,0,0,0});
    dis[a][0] = 0;
    while (!PQ.empty())
    {
        auto [node,t,c,p] = PQ.top();
        PQ.pop();
        if (vis[node].count(p))
        {
            continue;
        }
        vis[node].insert(p);
        for (auto [nxt,nxxt,nxc,nxp]:G[node])
        {
            int np = p+nxp;
            if (np > nxc)
            {
                continue;
            }
            int nt = nxxt + ceil((double)p*nxxt/nxc);
            if (!dis[nxt].count(np) || dis[nxt][np] > nt + t)
            {
                dis[nxt][np] = nt + t;
                PQ.push({nxt,nt+t,nxc,np});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> a >> b;
    a--,b--;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> t >> c >> p;
        u--,v--;
        G[u].push_back({v,t,c,p});
        G[v].push_back({u,t,c,p});
    }
    DJ();
    for (auto x:dis[b])
    { 
        ans = min(ans,x.second);
    }
    cout << (ans == INT_MAX?-1:ans);
    return 0;
}