#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5 + 1;
vector<int> G[sz];
int n, e, u, v, par[sz];
bool vis[sz], instack[sz];
stack<int> S;

bool DFS(int st)
{
    S.push(st);
    while (!S.empty())
    {
        int node = S.top();
        S.pop();

        if (node >= 0)
        {
            if (vis[node])
            {
                continue;
            }
            vis[node] = 1;
            instack[node] = 1;
            S.push(~node);

            for (int nxt : G[node])
            {
                if (!vis[nxt])
                {
                    par[nxt] = node;
                    S.push(nxt);
                }
                else if (instack[nxt])
                {
                    vector<int> path;
                    path.push_back(nxt + 1);
                    int cur = node;
                    while (cur != nxt)
                    {
                        path.push_back(cur + 1);
                        cur = par[cur];
                    }
                    path.push_back(nxt + 1);
                    reverse(path.begin(), path.end());
                    cout << path.size() << "\n";
                    for (int x : path)
                    {
                        cout << x << " ";
                    }
                    return 1;
                }
            }
        }
        else
        {
            instack[~node] = 0;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;

    for (int i = 0; i < n; i++)
        par[i] = i;

    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        --u;
        --v;
        G[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && DFS(i))
            return 0;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
