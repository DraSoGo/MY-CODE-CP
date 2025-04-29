#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v,par[sz];
vector <int> G[sz],path;
stack <int> S;
bool vis[sz];

bool DFS(int st)
{
    S.push(st);
    par[st] = -1;
    while (!S.empty())
    {
        int node = S.top();
        S.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        // cout << node+1 << "\n";
        for (auto nxt:G[node])
        {
            if (vis[nxt] && par[node] != nxt)
            {
                int tmp = node;
                path.push_back(nxt);
                while (tmp != nxt)
                {
                    path.push_back(tmp);
                    tmp = par[tmp];
                }
                path.push_back(nxt);
                reverse(path.begin(), path.end());
                return 1;
            }
            if (!vis[nxt])
            {
                par[nxt] = node;
                S.push(nxt);
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if(!vis[i] && DFS(i))
        {
            cout << path.size();
            cout << "\n";
            for(auto l:path)
            {
                cout << l+1 << " ";
            }
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}