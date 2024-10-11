#include <bits/stdc++.h>
using namespace std;
void add_edge(vector <int> graph[],int u,int v)
{
    graph[u - 1].push_back(v - 1);
    graph[v - 1].push_back(u - 1);
}
void DFS_until(vector <int> graph[],int src,bool vis)
{
    cout << src+1 << " ";
    vis[src] = true;
    for (auto node:graph[src])
    {
        if (vis[node] == false)
        {
            DFS_until(graph,src,vis);
        }
        
    }

}
void DFS(vector <int> graph[],int V,int src)
{
    bool vis[V];
    memset(vis,0,sizeof(vis));
    DFS_until(graph,src,vis);
}
int main()
{
    int V = 10,ch;
    vector <int> graph[V];
    add_edge(graph,1,2);
    add_edge(graph,1,3);
    add_edge(graph,1,4);
    add_edge(graph,2,5);
    add_edge(graph,3,6);
    add_edge(graph,3,7);
    add_edge(graph,4,6);
    add_edge(graph,5,9);
    add_edge(graph,6,10);
    DFS(graph,V,1);
}