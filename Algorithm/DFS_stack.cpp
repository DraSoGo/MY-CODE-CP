#include <bits/stdc++.h>
using namespace std;

int n,e,u,v;
vector <int> G[1000];
bool vis[1000];
stack <int> S;

void DFS(int st)
{
    S.push(st);
    vis[st] = 1;
    while (!S.empty())
    {
        int node = S.top();
        S.pop();
        cout << node+1 << " ";
        for (int i = 0; i < G[node].size(); i++)
        {
            if (!vis[G[node][i]])
            {
                vis[G[node][i]] = 1;
                S.push(G[node][i]);
            }
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
        u--,v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS(0);
    return 0;
}