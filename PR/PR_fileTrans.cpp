#include <bits/stdc++.h>
using namespace std;

int ch;

void ade(vector <int> G[],int u,int v)
{
    G[u].push_back(v);
}

void DFS2(vector <int> G[],int vis[],int u,int v)
{
    vis[u] = 1;
    if (u == v)
    {
        ch = 1;
        return;
    }
    //cout << u+1 << " ";
    for (int i = 0; i < G[u].size(); i++)
    {
        if (vis[G[u][i]] == 0)
        {
            DFS2(G,vis,G[u][i],v);
        }
        
    }
    
}

void DFS1(vector <int> G[],int n,int u,int v)
{
    int vis[n];
    memset(vis,0,sizeof(vis));
    DFS2(G,vis,u,v);
}

int main()
{
    int n,e,c,u,v;
    cin >> n >> e >> c;
    vector <int> G[n];
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        ade(G,u-1,v-1);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> u >> v;
        ch = 0;
        DFS1(G,n,u-1,v-1);
        if (ch == 0)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
        cout << "\n";
    }
    
}