#include <bits/stdc++.h>
using namespace std;
int vis[10000],co,ans = 1;
void ade(vector <int> G[],int u,int v)
{
    G[u].push_back(v);
}

void DFS(vector <int> G[],int s)
{
    vis[s] = 1;
    for (int i = 0; i < G[s].size(); i++)
    {
        if (vis[G[s][i]] == 0)
        {
            DFS(G,G[s][i]);
            co++;
        }
    }
}

int main()
{
    int n = 8,e,u,v;
    cin >> e;
    memset(vis,0,sizeof(vis));
    vector <int> G[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        ade(G,u,v);
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            co = 0;
            DFS(G,i);
            ans *= co+1;
        }
    }
    cout << ans;
}