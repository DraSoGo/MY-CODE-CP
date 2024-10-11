#include <bits/stdc++.h>
using namespace std;
bool vis[8];
void add_edge(vector <int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int DFS(vector <int> graph[],int src)
{
    stack <int> st;
    int tmp = 1;
    vis[src] = true;
    st.push(src);
    while (!st.empty())
    {
        int s = st.top();
        st.pop();
        vis[s] = true;
        for(auto node:graph[s])
        {
            if (vis[node] == false)
            {
                st.push(node);
                tmp++;
            }
            
        }
    }
    return tmp;
    
    
}
int main()
{
    memset(vis,0,sizeof(vis));
    int V = 8,ch,u,v,cnt = 0,c,ans = 1;
    cin >> c;
    vector <int> graph[V];
    for (int i = 0; i < c; i++)
    {
        cin >> u >> v;
        add_edge(graph,u,v);
    }
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == false)
        {
            ans = ans * DFS(graph,i);
        }
    }
    cout << ans;
}