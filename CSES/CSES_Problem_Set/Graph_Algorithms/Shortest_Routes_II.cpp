#include <bits/stdc++.h>
using namespace std;

const int sz = 5e2+1;
long long G[sz][sz];
long long n,e,u,v,w,q;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                G[i][j] = 0;
                continue;
            }
            G[i][j] = LLONG_MAX;
        }
    }
    
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G[u][v] = min(G[u][v],w);
        G[v][u] = min(G[v][u],w);
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!(G[i][k] == LLONG_MAX || G[j][k] == LLONG_MAX) && G[i][j] > G[i][k] + G[k][j])
                {
                    G[i][j] = G[i][k] + G[k][j];
                }
            }
        }
    }
    while (q--)
    {
        cin >> u >> v;
        u--;
        v--;
        cout << (G[u][v] == LLONG_MAX?-1:G[u][v]) << "\n";
    }
    return 0;
}