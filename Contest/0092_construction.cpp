#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};


const int sz = 2e5+10;
int n,e,u,v,st,ed,a,co = 0,ans;
int dis[sz];
char c;
vector <GP> G[sz];
priority_queue <GP> PQ;
bool vis[sz];

void DJ()
{
    dis[st] = 0;
    PQ.push({st,0});
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        if (node == ed)
        {
            ans = co;
        }
        for (auto [nxt,nw]:G[node])
        {
            if (dis[nxt] > dis[node] + nw)
            {
                dis[nxt] = dis[node] + nw;
                PQ.push({nxt,dis[nxt]});
            }
        }
        co++;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dis[i];
    }
    cin >> a >> c;
    a--;
    st = a*2+(c-'A');
    cin >> a >> c;
    a--;
    ed = a*2+(c-'A');
    // cout << st << " " << ed << "\n";
    for (int i = 0; i < 2*n; i+=2)
    {
        G[i].push_back({i+1,dis[i/2]});
        G[i+1].push_back({i,dis[i/2]});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        while (e--)
        {
            cin >> a >> c;
            a--;
            G[2*i+1].push_back({a*2+(c-'A'),0});
            G[a*2+(c-'A')].push_back({2*i+1,0});
        }
    }
    // for (int i = 0; i < 2*n; i++)
    // {
    //     cout << i << " : ";
    //     for (auto [nxt,nw]:G[i])
    //     {
    //         cout << nxt << "," << nw << " ";
    //     }
    //     cout << "\n";
    // }
    fill(dis,dis+sz,INT_MAX);
    DJ();
    cout << dis[ed] << " " << ans;
    return 0;
}
