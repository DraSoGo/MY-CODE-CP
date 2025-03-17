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
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector <int> ANS;
        vector <int> G[numCourses];
        int indeg[numCourses];
        int vis[numCourses];
        memset(indeg,0,sizeof(indeg));
        memset(vis,0,sizeof(vis));
        queue <int> Q;
        for(auto P:prerequisites)
        {
            int v = P[0];
            int u = P[1];
            G[u].push_back(v);
            indeg[v]++;
        }
        for (int i = 0; i < numCourses; i++)
        {
            if (indeg[i] == 0)
            {
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
            ANS.push_back(node);
            vis[node] = 1;
            for(auto nxt:G[node])
            {
                indeg[nxt]--;
                if (indeg[nxt] == 0)
                {
                    Q.push(nxt);
                }
            }
        }
        for (int i = 0; i < numCourses; i++)
        {
            if (indeg[i] > 0)
            {
                ANS.clear();
                return ANS;
            }
        }
        // cout << "hji";
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
    vector<vector<int>> V;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        V.push_back({u, v});
    }
    vector<int> ANS = so.findOrder(n, V);
    for (auto i : ANS)
    {
        cout << i << " ";
    }
    return 0;
}