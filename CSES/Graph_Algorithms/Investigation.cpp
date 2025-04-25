#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};

const long long sz = 1e5+10;
long long n,e,u,v,w;
long long num[sz],mx[sz],mn[sz],dis[sz];
bool vis[sz];
priority_queue <GP> PQ;
vector <GP> G[sz]; 

void DJ(int st)
{
    PQ.push({st,0});
    dis[st] = 0,mn[st] = 0,mx[st] = 0,num[st] = 1;
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for (auto [nxt,nw] : G[node])
        {
            if (dis[nxt] > nw + dis[node])
            {
                dis[nxt] = nw+dis[node];
                mn[nxt] = mn[node]+1;
                mx[nxt] = mx[node]+1;
                num[nxt] = num[node];
                PQ.push({nxt,dis[nxt]});
            }
            else if (dis[nxt] == nw + dis[node])
            {
                mn[nxt] = min(mn[node]+1,mn[nxt]);
                mx[nxt] = max(mx[node]+1,mx[nxt]);
                num[nxt] = (num[node]+num[nxt])%int(1e9+7);
            }
            
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        dis[i] = LLONG_MAX;
        mn[i] = LLONG_MAX;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--,v--;
        G[u].push_back({v,w});
        // G[v].push_back({u,w});
    }
    DJ(0);
    cout << dis[n-1] << " " << num[n-1] << " " << mn[n-1] << " " << mx[n-1];
    return 0;
}