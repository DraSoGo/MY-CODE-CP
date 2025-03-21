#include<bits/stdc++.h>
using namespace std;
vector<int> adj[51];
bool visited[51];
bool visited2[51];
int coloring[51];
int min_color;
vector<int> color;
void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void sol(int n)
{
    if(visited[n])
    {
        return ;
    }
    visited[n] = true;
    set<int> color_adj;
    for(auto &x:adj[n])
    {
        if(coloring[x] != 0)
        {
            color_adj.insert(coloring[x]);
        }
    }
    bool check_c = false;
    if(color_adj.size() == 0)
    {
        coloring[n] = color[0];
        check_c = true;
    }else{
        for(int i=0;i<color.size();i++)
        {
            if(color_adj.find(color[i]) == color_adj.end())
            {
                coloring[n] = color[i];
                check_c = true;
                break;
            }
        }
    }
    if(!check_c)
    {
        color.push_back(color[color.size()-1]+1);
        coloring[n] = color[color.size()-1];
    }
    for(auto &x:adj[n])
    {
        if(!visited[x])
        {
            sol(x);
        }
    }
}
void dfs(int n)
{
    if(visited2[n])
    {
        return ;
    }
    visited2[n] = true;
    color.clear();
    color.push_back(1);
    for(int i=1;i<=50;i++)
    {
        visited[i] = false;
        coloring[i] = 0;
    }
    sol(n);
    int color_size = color.size();
    min_color = min(min_color,color_size);
    for(auto &x:adj[n])
    {
        if(!visited2[x])
        {
            dfs(x);
        }
    }
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        addEdge(a,b);
    }
    for(int i=1;i<=n;i++)
    {
        visited2[i] = false;
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(!visited2[i])
        {
            min_color = INT_MAX;
            dfs(i);
            ans = max(ans,min_color);
        }
    }
    cout<<ans;
    return 0;
}