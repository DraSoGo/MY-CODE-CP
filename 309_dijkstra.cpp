#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> G[],int u,int v,int w)
{
    G[u].push_back({v,w});
    G[v].push_back({u,w});
}
void shortestPath(vector<pair<int,int>> G[],int src,int V)
{
    vector<int> dist(V,INT_MAX);
    vector<bool> visited(V,false);
    dist[src] = 0;
    priority_queue< pair<int,int> , vector<pair<int,int> >, greater< pair<int,int> > > Q;
    Q.push(make_pair(0,src));
    while(!Q.empty())
    {
        pair<int,int> v = Q.top();
        Q.pop();
        int s = v.second;
        int w = v.first;
        if (visited[s] == true)continue;
        visited[s] = true;
        for(auto adj_node:G[s])
        {
            int node = adj_node.first;
            int weight = adj_node.second;
            if(dist[s] + weight < dist[node])
            {
                dist[node] = dist[s] + weight;
                Q.push({dist[node],node});
            }
        }
    }
    for(int i = 0;i < V;i++)
    {
        cout<<"node: "<< i <<" STP from src : "<<dist[i]<<endl;
    }
}
main()
{
    int V = 9;
    vector<pair<int,int>> G[V];
    add_edge(G,0,1,4);
    add_edge(G,0,7,8);
    add_edge(G,1,2,8);
    add_edge(G,1,7,11);
    add_edge(G,2,3,7);
    add_edge(G,2,5,4);
    add_edge(G,2,8,2);
    add_edge(G,3,4,9);
    add_edge(G,3,5,14);
    add_edge(G,4,5,10);
    add_edge(G,5,6,2);
    add_edge(G,6,7,1);
    add_edge(G,6,8,6);
    add_edge(G,7,8,7);
    shortestPath(G,0,V);
}