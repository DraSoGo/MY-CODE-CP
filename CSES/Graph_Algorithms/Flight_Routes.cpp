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
vector <GP> G[sz];
long long n,e,k,u,v,w;
int vis[sz];
priority_queue <GP> PQ;

void DJ(int st)
{
    PQ.push({st,0});
    while (!PQ.empty())
    {
        auto [node,w] = PQ.top();
        PQ.pop();
        if (node == n-1)
        {
            cout << w << " ";
            if (vis[node] == k-1)
            {
                return;
            }
        }
        
        if (vis[node] > k)
        {
            continue;
        }
        vis[node]++;
        for(auto [nxt,nw]:G[node])
        {
            if (vis[nxt] <= k)
            {
                PQ.push({nxt,nw+w});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> k;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v,w});
    }
    DJ(0);
    return 0;
}
