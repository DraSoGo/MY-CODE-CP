#include <bits/stdc++.h>
using namespace std;

int co;
vector <pair<int,int>> G[1001];
int dist[1001],par[1001],n;
bool vis[1001];

int findpath(int st,int ed)
{
    vector <int> path;
    while (par[ed] != ed)
    {
        path.push_back(ed);
        ed = par[ed];
    }
    path.push_back(st);
    int sz = path.size() - 1;
    for (int i = 0; i <sz; i++)
    {
        int a = path[i];
        int b = path[i+1];
        cout << a << " " << b << "\n";
        G[b].push_back({0,a});
        G[a].push_back({0,b});
    }
}

int DJ(int st,int ed)
{
    priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;
    co = 0;
    for (int i = 0; i < 1001; i++)
    {
        dist[i] = INT_MAX;
        par[i] = i;
        vis[i] = 0;
    }
    PQ.push({0,st});
    dist[st] = 0;
    while (!PQ.empty())
    {
        auto [w,u] = PQ.top();
        PQ.pop();
        if (vis[u])
        {
            continue;
        }
        vis[u] = 1;
        for (int i = 0; i < G[u].size(); i++)
        {
            //cout << dist[G[u][i].second] << " " << G[u][i].first << " + " << w << "\n";
            if (dist[G[u][i].second] > G[u][i].first + w)
            {
                par[par[G[u][i].second]] = u;
                dist[G[u][i].second] = G[u][i].first + w;
                PQ.push({dist[G[u][i].second],G[u][i].second});
            }
        }
        
        //cout << "\n";
    }
    return dist[ed];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << par[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dist[i] << " ";
    // }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int e,a,b,x,y,u,v,w;
    cin >> n >> e;
    cin >> a >> b;
    cin >> x >> y;
    a--;b--;x--;y--;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u-1].push_back({w,v-1});
        G[v-1].push_back({w,u-1});
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < G[i].size(); j++)
        {
            cout << "(" << G[i][j].second << "," << G[i][j].first << ") ";
        }
        cout << "\n";
    }
    cout << "\n";
    DJ(a,b);
    findpath(a,b);
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < G[i].size(); j++)
        {
            cout << "(" << G[i][j].second << "," << G[i][j].first << ") ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << DJ(x,y);
    return 0;
}