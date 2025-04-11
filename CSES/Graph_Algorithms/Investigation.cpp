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

const int sz = 1e5+1;
long long n,e,u,v,w;
vector <GP> G[sz];
priority_queue <GP> PQ;
long long dis[sz],mn[sz],mx[sz],num[sz];
bool vis[sz];

void DJ(int st)
{
    PQ.push({st,0});
    dis[st] = 0;
    mn[st] = 0;
    mx[st] = 0;
    num[st] = 1;
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        // cout << node << ": ";
        // cout << dis[node] << " ";
        // cout << num[node] << " ";
        // cout << mn[node] << " ";
        // cout << mx[node] << "\n";
        vis[node] = 1;
        // cout << node << "\n";
        for(auto [nxt,nw] : G[node])
        {
            if (dis[nxt] > nw + dis[node])
            {
                dis[nxt] = nw + dis[node];
                mn[nxt] = mn[node]+1;
                mx[nxt] = mx[node]+1;
                num[nxt] = num[node];
                PQ.push({nxt,dis[nxt]});
            }
            else if (dis[nxt] == nw + dis[node])
            {
                mn[nxt] = min(mn[nxt],mn[node]+1);
                mx[nxt] = max(mx[nxt],mx[node]+1);
                num[nxt] = (num[node] + num[nxt])%int(1e9+7);
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
        u--;
        v--;
        G[u].push_back({v,w});
    }
    DJ(0);
    cout << dis[n-1] << " ";
    cout << num[n-1] << " ";
    cout << mn[n-1] << " ";
    cout << mx[n-1];
    return 0;
}