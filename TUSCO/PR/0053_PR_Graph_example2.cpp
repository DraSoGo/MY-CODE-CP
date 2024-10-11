#include <bits/stdc++.h>
using namespace std;

void add_edge(int graph[][100], int u, int v, int n)
{
    graph[u][v] = 1;
}

int main()
{
    int m, n, a, b;
    cin >> m >> n;
    int graph[100][100];
    memset(graph, 0, sizeof(graph));
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        add_edge(graph, a, b, m);
        graph[i][i] = 1;
    }
    cout << "[";
    for (int i = 0; i < m; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << "[ ";
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j] << " ";
        }
        if (i == m-1)
        {
            cout << "]";
        }
        
        cout << "]\n";
    }
    return 0;
}
