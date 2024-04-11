#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int v;
    int w;
    int st;
    bool operator < (const Graph & a)const
    {
        return w < a.w;
    }
};



vector <Graph> V[10001];
priority_queue <Graph> PQ;
int dist[10001][10001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,e,u,v,w;
    cin >> n >> a >> b >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v >> w;
        V[u].push_back({v,w});
    }
    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < 10001; j++)
        {
            dist[i][j] = INT_MAX;
        }
    }
    dist[a][0] = 0;
    PQ.push({a,0,0});
    return 0;
}