#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int n,e,u,v;
vector <int> G[sz];
bool vis[sz];
int par[sz];

bool chcycle(int st)
{
    stack <int> S;
    S.push(st);
    vis[st] = 1;
    par[st] = -1;
    while (!S.empty())
    {
        int node = S.top();
        S.pop();
        
        for (int i = 0; i < G[node].size(); i++)
        {
            if (vis[G[node][i]] && G[node][i] != par[node])
            {
                // cout << node << " " << G[node][i] << "\n";
                return 1;
            }
            if (!vis[G[node][i]])
            {
                vis[G[node][i]] = 1;
                par[G[node][i]] = node;
                S.push(G[node][i]);
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    bool ch = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && chcycle(i) == 1)
        {
            ch = 1;
            break;   
        }
    }
    ch == 1?cout << "YES":cout << "NO";
    return 0;
    
}