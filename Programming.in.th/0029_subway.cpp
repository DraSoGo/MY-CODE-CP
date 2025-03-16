#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,e,s,x,y;
    cin >> n >> e;
    int G[n][n];
    bool vis[n];
    bool viss[n];
    memset(vis,0,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            i == j?G[i][j] = 0:G[i][j] = INT_MAX;
        }
    }
    for (int k = 0; k < e; k++)
    {
        vector <int> V;
        cin >> s;
        for (int j = 0; j < s; j++)
        {
            cin >> x;
            x--;
            V.push_back(x);
        }
        for (int i = 0; i < s-1; i++)
        {
            if (G[V[i]][V[i+1]] != 0 && G[V[i+1]][V[i]] != 0 && (vis[V[i]] || vis[V[i+1]]))
            {
                G[V[i]][V[i+1]] = 1;
                G[V[i+1]][V[i]] = 1;
                continue;
            }
            G[V[i]][V[i+1]] = 0;
            G[V[i+1]][V[i]] = 0;
            vis[V[i]] = 1;
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (G[i][k] != INT_MAX && G[k][j] != INT_MAX && G[i][j] > G[i][k] + G[k][j])
                {
                    G[i][j] = G[i][k] + G[k][j];
                }
            }
        }
    }
    int q,a,b;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        a--;
        b--;
        G[a][b] == INT_MAX?cout << "impossible":cout << G[a][b];
        cout << "\n";
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}