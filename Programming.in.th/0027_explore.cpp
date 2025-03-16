#include <bits/stdc++.h>
using namespace std;

const int sz = 5e5+1;
vector <int> G[sz];
int n,m,k,u,v,x,mx = -1;
bool chk[sz],vis[sz];
queue <int> Q;

void BFS(int st)
{
    Q.push(st);
    while (!Q.empty())
    {
        int node = Q.front();
        mx = max(node,mx);
        Q.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for(auto nxt:G[node])
        {
            Q.push(nxt);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        x--;
        chk[x] = 1;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (chk[i])
        {
            continue;
        }
        G[i].push_back(i+1);
    }
    BFS(0);
    mx++;
    if (mx == n)
    {
        cout << 1;
    }
    else
    {
        cout << 0 << " " << mx;
    }
    
    return 0;
}