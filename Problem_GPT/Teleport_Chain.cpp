//https://chatgpt.com/canvas/shared/680a6a26253c8191a9bcb1f2f4f455b3
#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5+1;
int n,e,u,v,ans;
int DP[sz],in[sz];
vector <int> G[sz];
queue <int> Q;
bool vis[sz];

void Topo()
{
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        ans = max(ans,DP[node]);
        for (auto nxt:G[node])
        {
            in[nxt]--;
            DP[nxt] = max(DP[nxt],DP[node]+1);
            if (in[nxt] == 0)
            {
                Q.push(nxt);
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
        in[v]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 0)
        {
            Q.push(i);
        }
    }
    Topo();
    cout << ans+1;
    return 0;
}