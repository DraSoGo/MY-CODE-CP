#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,e,v,u,w;
    cin >> n >> e;
    long long G[n][n];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            G[i][j] = INT_MAX;
        }
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> v >> u >> w;
        G[v][u] = min(w,G[v][u]);
        G[u][v] = min(w,G[u][v]);
    }
    for (long long i = 0; i < n; i++)
    {
        G[i][i] = 0;
    }
        for (long long k = 0; k < n; k++)
        {
            for (long long i = 0; i < n; i++)
            {
                for (long long j = 0; j < n; j++)
                {
                if (G[i][j] > G[i][k] + G[k][j])
                {
                    G[i][j] = G[i][k] + G[k][j];
                }
            }
        }
    }
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }
    long long sum = 0;
    for (long long i = 0; i < n-1; i++)
    {
        sum += G[i][i+1];
    }
    cout << sum;
    return 0;
}