#include <bits/stdc++.h>
using namespace std;
int n = 5;
int graph[5][5];
void add_edge(int u,int v)
{
    graph[u][v] = 1;
}
int main()
{
    add_edge(0,1);
    add_edge(0,4);
    add_edge(1,0);
    add_edge(1,2);
    add_edge(1,3);
    add_edge(1,4);
    add_edge(2,1);
    add_edge(2,3);
    add_edge(3,1);
    add_edge(3,2);
    add_edge(3,4);
    add_edge(4,0);
    add_edge(4,1);
    add_edge(4,3);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    
}