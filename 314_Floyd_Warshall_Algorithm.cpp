#include <bits/stdc++.h>
using namespace std;
#define INF 99999
int n,e,u,v,w,V;
int G[1001][1001];
int dist[1001][1001];
void add_edge(int u, int v, int w)
{
    G[u][v] = w;
}
void print2d_array()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}
void Floyd()
{
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = G[i][j];
    print2d_array();
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    print2d_array();
}
main()
{
    V = e;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i == j)
                add_edge(i, j, 0);
            else
                add_edge(i, j, INF);
        }
    }
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        add_edge(u,v,w);
    }
    Floyd();
}
