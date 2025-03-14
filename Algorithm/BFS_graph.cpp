#include <bits/stdc++.h>
using namespace std;

int n,e,u,v;
vector <int> V[1000];
queue <int> Q;
int dis[1000];
bool vis[1000];

void BFS(int st)
{
    Q.push(st);
    vis[st] = 1;
    dis[st] = 1;
    while (!Q.empty())
    {
        int node = Q.front();
        cout << node+1 << " ";
        Q.pop();
        // cout << V[node].size() << "\n";
        for (int i = 0; i < V[node].size(); i++)
        {
            if (!vis[V[node][i]])
            {
                Q.push(V[node][i]);
                vis[V[node][i]] = 1;
                dis[V[node][i]] = dis[node]+1;
            }
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << " ";
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
        V[u].push_back(v);
        V[v].push_back(u);
    }
    BFS(0);
    return 0;
}