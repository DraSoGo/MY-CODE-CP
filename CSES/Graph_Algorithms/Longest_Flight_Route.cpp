#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,w;
    bool operator < (const GP&a)const
    {
        return a.w > w;
    }
};

const int sz = 1e5+1;
vector <GP> G[sz];
int n,e,u,v,w;
int dis[sz],par[sz];
priority_queue <GP> PQ;
bool vis[sz];

void DJ(int st)
{
    PQ.push({st,0});
    dis[st] = 0;
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        // if (vis[node])
        // {
        //     continue;
        // }
        // vis[node] = 1;
        // cout << node+1 << "\n";
        for(auto [nxt,nw]:G[node])
        {
            // cout << nxt+1 << " ";
            if (dis[nxt] < dis[node]+nw)
            {
                dis[nxt] = dis[node]+nw;
                par[nxt] = node;
                PQ.push({nxt,dis[nxt]});
            }
        }
        // cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    fill(dis,dis+sz,-1);
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back({v,1});
    }
    DJ(0);
    if (dis[n-1] == -1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dis[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << par[i]+1 << " ";
    // }
    vector <int> path;
    int ed = n-1;
    while (par[ed] != ed)
    {
        path.push_back(ed+1);
        ed = par[ed];
    }
    path.push_back(ed+1);
    reverse(path.begin(),path.end());
    cout << path.size() << "\n";
    for(auto x:path)
    {
        cout << x << " ";
    }
    return 0;
}