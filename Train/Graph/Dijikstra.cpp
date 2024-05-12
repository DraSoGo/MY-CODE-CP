#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int node,w;
    bool operator < (const Point & a)const
    {
        return w > a.w;
    }
};

const int N = 1000;
vector <Point> adj[N];
vector <int> path[N];
priority_queue <Point> PQ;
int dist[N];

void DJ(int bg,int ed)
{
    PQ.push({bg,0});
    dist[bg] = 0;
    path[bg].push_back(bg);
    while (!PQ.empty())
    {
        auto[node,w] = PQ.top();
        PQ.pop();
        if (w > dist[node])
        {
            continue;
        }
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (dist[adj[node][i].node] > w + adj[node][i].w)
            {
                vector <int> tmp;
                tmp = path[node];
                tmp.push_back(adj[node][i].node);
                path[adj[node][i].node] = tmp;
                PQ.push({adj[node][i].node,dist[adj[node][i].node] = w + adj[node][i].w});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dist,dist + N,INT_MAX);
    int n,e,bg,ed,u,v,w;
    cin >> n >> e >> bg >> ed;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    DJ(bg,ed);
    cout << dist[ed] << "\n";
    for (int i = 0; i < path[ed].size(); i++)
    {
        cout << path[ed][i] << " ";
    }
    return 0;
}
/*
INPUT
5 8 0 2
0 1 2
1 2 6
1 4 3
4 2 1
3 2 5
0 3 10
5 3 4
0 5 1
OUTPUT
6
0 1 4 2 
*/