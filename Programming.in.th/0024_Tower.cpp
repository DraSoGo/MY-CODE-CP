#include<bits/stdc++.h>
using namespace std;

const int sz = 1e4+1;
vector <int> G[sz];
int mx = -1;
int n,e,c,u,v,co;
bool vis[sz];
queue <int> Q;

void BFS(int st)
{
    Q.push(st);
    while (!Q.empty())
    {
        int lv = Q.size();
        co++;
        while (lv--)
        {
            int node = Q.front();
            Q.pop();
            if (vis[node])
            {
                continue;
            }
            // cout << node << " ";
            if (co <= c+1)
            {
                mx = max(node,mx);
            }
            
            vis[node] = 1;
            for(int nxt : G[node])
            {
                Q.push(nxt);
            }
        }
        // cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> c >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        // G[v].push_back(u);
    }
    BFS(0);
    cout << mx+1;
    return 0;
}