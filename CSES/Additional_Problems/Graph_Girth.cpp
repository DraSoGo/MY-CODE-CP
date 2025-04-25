#include <bits/stdc++.h>
using namespace std;

const int sz = 3e4;
int n,e,u,v,ans = INT_MAX;
int par[sz],dis[sz];
bool vis[sz];
vector <int> G[sz];
queue <int> Q;

void BFS(int st)
{
    Q.push(st);
    vis[st] = 1;
    while (!Q.empty())
    {
        int node = Q.front();
        // cout << node+1 << "\n";
        Q.pop();
        for (auto nxt:G[node])
        {
            if (!vis[nxt])
            {
                vis[nxt] = 1;
                par[nxt] = node;
                dis[nxt] = dis[node]+1;
                Q.push(nxt);
            }
            else if (par[node] != nxt)
            {
                ans = min(ans,dis[node]+dis[nxt]+1);
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
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            par[j] = j;
            vis[j] = 0;
            dis[j] = 0;
        }
        BFS(i);
        // cout << "\n";
    }
    cout << (ans == INT_MAX?-1:ans);
    return 0;
}