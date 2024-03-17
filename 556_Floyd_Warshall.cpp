#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,v,u,w;
    cin >> n >> e;
    int G[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = 99999999;
        }
    }
    for (int i = 0; i < e; i++)
    {
        cin >> v >> u >> w;
        v--;
        u--;
        G[v][u] = w;
    }
    for (int i = 0; i < n; i++)
    {
        G[i][i] = 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << G[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }
    
    
}