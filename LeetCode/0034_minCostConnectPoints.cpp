#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int minCostConnectPoints(vector<vector<int>> &points)
    {
        struct GP
        {
            int v,w;
            bool operator < (const GP & a)const
            {
                return a.w < w;
            }
        };
        struct pos
        {
            int x,y;
        };
        int n = points.size();
        vector <GP> adj[n];
        vector <pos> G;
        priority_queue <GP> PQ;
        int idx = 0,dis[n],ans = 0;
        bool vis[n];
        fill(dis,dis+n,INT_MAX);
        memset(vis,0,sizeof(vis));
        for(auto P:points)
        {
            int x = P[0];
            int y = P[1];
            G.push_back({x,y});
            for (int i = 0; i < idx; i++)
            {
                adj[idx].push_back({i,abs(x-G[i].x) + abs(y-G[i].y)});
                adj[i].push_back({idx,abs(x-G[i].x) + abs(y-G[i].y)});
            }
            idx++;
        }
        PQ.push({0,0});
        dis[0] = 0;
        while (!PQ.empty())
        {
            auto [node,w] = PQ.top();
            PQ.pop();
            if (vis[node])
            {
                continue;
            }
            ans += w;
            vis[node] = 1;
            for(auto [nxt,nw]:adj[node])
            {
                if (dis[nxt] > nw)
                {
                    dis[nxt] = nw;
                    PQ.push({nxt,nw});
                }
            }
        }
        
        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, e, u, v;
    cin >> n;
    vector<vector<int>> V;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        V.push_back({u, v});
    }
    cout << so.minCostConnectPoints(V);
    return 0;
}