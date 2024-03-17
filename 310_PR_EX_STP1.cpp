#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> G[],int u,int v,int w)
{
    G[u].push_back({v,w});
    G[v].push_back({u,w});
}
void shortestPath(vector<pair<int,int>> G[],int src,int V,int e)
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
    cout << dist[e];
}
main()
{
    int V,X,s,e,a,b,c;
    cin >> V >> X >> s >> e;
    vector<pair<int,int>> G[V];
    for (int i = 0; i < X; i++)
    {
        cin >> a >> b >> c;
        add_edge(G,a,b,c);
    }
    shortestPath(G,s,V,e);
}