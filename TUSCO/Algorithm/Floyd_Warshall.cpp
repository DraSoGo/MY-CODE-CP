#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,e,u,v,w;
    cin >> n >> e;
    long long G[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = INT_MAX;
        }
    }
    for (int i = 0; i < n; i++)
    {
        G[i][i] = 0;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u][v] = w;
        G[v][u] = w;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (G[i][j] > G[i][k] + G[k][j])
                {
                    G[i][j] = G[i][k] + G[k][j];
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        ans += G[i][i+1];
    }
    cout << ans;
    return 0;
}