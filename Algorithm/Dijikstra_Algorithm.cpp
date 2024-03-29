#include <bits/stdc++.h>
using namespace std;
int n,e;
vector <pair<int,int>> G[1001];
vector <int> V[1001];
priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> PQ;
int dist[1001],vis[1001];


void DJ(int st,int ed)
{
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
        dist[i] = INT_MAX;
    }
    V[st].push_back(st);
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
            if (dist[G[u][i].second] > w + G[u][i].first)
            {
                vector <int> tmp;
                tmp = V[u];
                tmp.push_back(G[u][i].second);
                V[G[u][i].second] = tmp;
                dist[G[u][i].second] = w + G[u][i].first;
                PQ.push({dist[G[u][i].second],G[u][i].second});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            cout << V[i][j] << " ";
        }
        cout << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int u,v,w,a,b;
    cin >> n >> e >> a >> b;
    a--;
    b--;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G[u-1].push_back({w,v-1});
        G[v-1].push_back({w,u-1});
    }
    DJ(a,b);
    return 0;
}
/*
test case
6 10
1 6
1 2 7
1 4 3
2 4 2
2 3 5
2 5 10
4 3 1
4 5 14
3 5 8
3 6 3
5 6 1
*/