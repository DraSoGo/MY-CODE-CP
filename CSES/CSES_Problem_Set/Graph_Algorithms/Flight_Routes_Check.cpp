#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v;
vector <int> G[sz][2];
bool vis[sz];
stack <int> S;

void DFS(int st,int s)
{
    memset(vis,0,sizeof(vis));
    S.push(st);
    while (!S.empty())
    {
        int node = S.top();
        S.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for(auto nxt:G[node][s])
        {
            S.push(nxt);
        }
    }
    
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
        G[u][0].push_back(v);
        G[v][1].push_back(u);
    }
    DFS(0,0);
    for (int i = 0; i < n; i++)
    {
        // cout << vis[i] << " ";
        if (!vis[i])
        {
            // cout << "\n";
            cout << "NO\n" << 1 << " " << i+1;
            return 0;
        }
    }
    // cout << "\n";
    DFS(0,1);
    for (int i = 0; i < n; i++)
    {
        // cout << vis[i] << " ";
        if (!vis[i])
        {
            // cout << "\n";
            cout << "NO\n" << i+1 << " " << 1;
            return 0;
        }
    }
    cout << "YES";
    return 0;
}