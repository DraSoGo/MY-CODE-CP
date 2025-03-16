#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3;
int n,e,u,v,w;
int G[sz][sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            i == j?G[i][j] = 0:G[i][j] = INT_MAX;
            // cout << G[i][j] << " ";
        }
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
                if(G[i][k] != INT_MAX && G[k][j] != INT_MAX && G[i][j] > G[i][k] + G[k][j])
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
            if (G[i][j] == INT_MAX)
            {
                cout << -1 << " ";
                continue;
            }
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
