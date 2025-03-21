#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,e,u,v,w,q;
    cin >> n >> e >> q;
    int dis[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dis[i][j] = 0;
                continue;
            }
            dis[i][j] = INT_MAX;
        }
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        dis[u][v] = w;
        dis[v][u] = w;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dis[i][k] != INT_MAX && dis[k][j] != INT_MAX && dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    while (q--)
    {
        cin >> u >> v;
        u--;
        v--;
        cout << dis[u][v] << "\n";
    }
    return 0;
}