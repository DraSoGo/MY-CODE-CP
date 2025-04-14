//https://atcoder.jp/contests/dp/tasks/dp_g
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v,ans;
vector <int> G[sz];
int in[sz],DP[sz];
queue <int> Q;

void BFS()
{
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        for(auto nxt:G[node])
        {
            DP[nxt] = max(DP[nxt],DP[node]+1);
            ans = max(DP[nxt],ans);
            in[nxt]--;
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
    BFS();
    cout << ans;
    return 0;
}