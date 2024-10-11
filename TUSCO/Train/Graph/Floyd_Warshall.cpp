#pragma GCC optimize ("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,e,u,v,w;
    cin >> n >> e;
    long long adj[n][n];
    fill_n(adj[0],n*n,INT_MAX);
    for (int i = 0; i < n; i++)
    {
        adj[i][i] = 0;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (adj[i][j] > adj[i][k] + adj[k][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
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
0 2 8 10 5 
1 0 4 9 3 
5 4 0 5 1 
10 9 5 0 6 
4 3 1 6 0 
*/