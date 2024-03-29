#include <bits/stdc++.h>
using namespace std;

int G[1001][3],dist[1001];
int n,e;

void BMF(int st)
{
    bool ch;
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[st] = 0;
    for (int i = 0; i < n; i++)
    {
        ch = 0;
        for (int j = 0; j < e; j++)
        {
            int u = G[j][0];
            int v = G[j][1];
            int w = G[j][2];
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                ch = 1;
            }
        }
    }
    if (ch)
    {
        cout << "negative wash cycle";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0); 
    int st;
    cin >> n >> e >> st;
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> G[i][j];
        }
    }
    BMF(st);
    return 0;
}