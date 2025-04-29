#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v,T[sz];
vector <int> G[sz];
bool vis[sz];
queue <int> Q;

bool BFS(int st,int id)
{
    Q.push(st);
    T[st] = 1;
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        // cout << node << " " << T[node] << "\n";
        for(auto nxt:G[node])
        {
            // cout << nxt << " " << T[nxt] << "\n";
            if (vis[nxt])
            {
                continue;
            }
            if (id == 1)
            {
                T[node] == 1?T[nxt] = 2:T[nxt] = 1;
            }
            else if(T[node] == T[nxt])
            {
                return 0;
            }
            Q.push(nxt);
        }
        // cout << "\n";
    }
    return 1;
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
        if (!vis[i])
        {
            BFS(i,1);
        }
    }
    memset(vis,0,sizeof(vis));
    // cout << "_____\n";
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if(!BFS(i,0))
            {
                cout << "IMPOSSIBLE";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << T[i] << " ";
    }
    
    return 0;
}