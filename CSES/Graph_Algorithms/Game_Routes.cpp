#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
vector <int> G[sz];
long long n,e,u,v,dis[sz];
queue <int> Q;
int in[sz];

void Topo()
{
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        // cout << node+1 << " ";
        for(auto nxt:G[node])
        {
            in[nxt]--;
            dis[nxt]+=dis[node];
            dis[nxt] %= int(1e9+7);
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
    dis[0] = 1;
    Topo();
    cout << dis[n-1];
    return 0;
}