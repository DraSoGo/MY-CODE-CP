#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int n,e,u,v;
vector <int> G[sz];
int indre[sz],vis[sz];
queue <int> Q;
vector <int> TPS;

void Topo(int st)
{
    Q.push(st);
    vis[st] = 1;
    while (!Q.empty())
    {
        int node = Q.front();
        TPS.push_back(node);
        Q.pop();
        for(auto next:G[node])
        {
            if (!vis[next])
            {
                indre[next]--;
                if (indre[next] == 0)
                {
                    vis[next] = 1;
                    Q.push(next);
                }
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
        indre[v]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && indre[i] == 0)
        {
            Topo(i);
        }
    }
    for (int i = 0; i < TPS.size(); i++)
    {
        cout << TPS[i]+1 << " ";
    }
    return 0;
}