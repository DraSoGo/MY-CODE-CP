#include <bits/stdc++.h>
using namespace std;
void add_edge(vector <int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int main()
{
    int V = 5;
    vector <int> graph[V];
    memset(graph,0,sizeof(graph));
    add_edge(graph,0,1);
    add_edge(graph,0,3);
    add_edge(graph,1,2);
    add_edge(graph,2,3);
    add_edge(graph,2,4);
    for (int i = 0; i < V; i++)
    {
        cout << "N " << i << ": ";
        for (auto V:graph[i])
        {
            cout << V << " ";
        }
        cout << "\n";
    }
    
}