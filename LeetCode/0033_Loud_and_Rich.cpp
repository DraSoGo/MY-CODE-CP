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
    vector<int> loudAndRich(vector<vector<int>> &richer, vector<int> &quiet)
    {
        int e = richer.size();
        int n = quiet.size();
        int indeg[n];
        vector <int> ANS;
        bool vis[n];
        memset(indeg,0,sizeof(indeg));
        memset(vis,0,sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            ANS.push_back(i);
        }
        vector <int> G[n];
        queue <int> Q;
        for(auto x:richer)
        {
            int u = x[0];
            int v = x[1];
            G[u].push_back(v);
            indeg[v]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (indeg[i] == 0)
            {
                // cout << i << "\n";
                Q.push(i);
            }
        }
        while (!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            if (vis[node])
            {
                continue;
            }
            // cout << node << "\n";
            vis[node] = 1;
            for(auto nxt:G[node])
            {
                indeg[nxt]--;
                if (quiet[ANS[node]] < quiet[ANS[nxt]])
                {
                    ANS[nxt] = ANS[node];
                }
                // cout << nxt << " " << indeg[nxt] << "\n";
                if (indeg[nxt] == 0)
                {
                    // cout << nxt << "\n";
                    // if (quiet[par[nxt]] > quiet[node])
                    // {
                    // }
                    Q.push(nxt);
                }
            }
        }
        return ANS;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, e, u, v;
    cin >> n >> e;
    vector<int> Q;
    vector<vector<int>> V;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        V.push_back({u, v});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        Q.push_back(v);
    }
    vector<int> ANS = so.loudAndRich(V, Q);
    for (auto i : ANS)
    {
        cout << i << " ";
    }
    return 0;
}