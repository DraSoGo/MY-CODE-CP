#include <bits/stdc++.h>
using namespace std;
void add_edge(vector <int> graph[],int u,int v)
{
    graph[u - 1].push_back(v - 1);
    graph[v - 1].push_back(u - 1);
}
void BFS(vector <int> graph[],int V,int scr)
{
    bool vis[V];
    int dis[V];
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    queue <int> q;
    vis[scr - 1] = true;
    q.push(scr - 1);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        cout << s + 1 << " ";
        for (auto node:graph[s])
        {
            if (vis[node] == false)
            {
                vis[node] = true;
                q.push(node);
                dis[node] = dis[s]+1;
            }   
        }   
    }
    cout << "\n";
    for (int i = 0; i < V; i++)
    {
        cout << dis[i] << " ";
    }
    
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
    BFS(graph,V,1);
}