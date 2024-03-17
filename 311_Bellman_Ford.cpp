#include<bits/stdc++.h>
using namespace std;
void BellmanFord(int graph[][3],int V,int E,int src)
{
    int dist[V];
    for(int i = 0;i < V;i++)
        dist[i] = INT_MAX;

    dist[src] = 0;
    for(int i = 0;i < V-1;i++)
    {
        for(int j = 0;j < E;j++)
        {
            int u = graph[j][0];
            int v = graph[j][1];
            int w = graph[j][2];
            if(dist[v] > dist[u]+w)
            {
                dist[v] = dist[u]+w;
            }
        }
    }
    bool is_contain_neg_cycle =false;
    for(int j=0;j<E;j++)
    {
        int u = graph[j][0];
        int v = graph[j][1];
        int w = graph[j][2];
        if(dist[v] > dist[u]+w)
        {
                cout << "Graph contain Negative Cycle\n";
                is_contain_neg_cycle = true;
        }
    }
    if(!is_contain_neg_cycle)
    {
        cout<<"SSTP from src to: " << "\n";
        for(int i=0;i<V;i++)
            cout << i << " Distance: " << dist[i] << "\n";
    }

}
main()
{
    int V=5,E=8;
    int graph[][3] = { { 0, 1, -1 }, { 0, 2, 4 },
                       { 1, 2, 3 }, { 1, 3, 2 },
                       { 1, 4, 2 }, { 3, 2, 5 },
                       { 3, 1, 1 }, { 4, 3, -3 } };
    BellmanFord(graph,V,E,0);
}
