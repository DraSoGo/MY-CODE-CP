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
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        int indeg[numCourses];
        bool vis[numCourses];
        vector <int> G[numCourses];
        memset(indeg,0,sizeof(indeg));
        memset(vis,0,sizeof(vis));
        for(auto pre : prerequisites)
        {
            int u = pre[0];
            int v = pre[1];
            G[u].push_back(v);
            indeg[v]++;
        }
        queue <int> Q;
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
            vis[node] = 1;
            for(int nxt:G[node])
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
                return 0;
            }
        }
        return 1;
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
        V.push_back({u,v});
    }
    cout << so.canFinish(n, V);
    return 0;
}