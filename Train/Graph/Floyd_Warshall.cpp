#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3;
int G[sz][sz];
int n,e,u,v,w;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                G[i][j] = 0;
                continue;
            }
            G[i][j] = INT_MAX;
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
                if (!(G[i][k] == INT_MAX || G[j][k] == INT_MAX) && G[i][j] > G[i][k] + G[k][j])
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
        
    return 0;
}
/*
INPUT
5 8
0 1 2
1 2 6
1 4 3
4 2 1
3 2 5
0 3 10
5 3 4
0 5 1
OUTPUT
0 2 6 10 5 
2 0 4 9 3 
6 4 0 5 1 
10 9 5 0 6 
5 3 1 6 0 
*/