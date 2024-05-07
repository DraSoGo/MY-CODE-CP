#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int node,f,t,w;
    bool operator < (const Graph & a)const
    {
        return w > a.w;
    }
};

struct ADJ
{
    int node,w;
};

const int N = 101;
int cost[N],dis[N][N][2],mxf;
vector <ADJ> adj[N];
priority_queue <Graph> PQ;

void add(int node,int f,int t,int w)
{
    if (dis[node][f][t] > w)
    {
        PQ.push({node,f,t,dis[node][f][t] = w});
    }
}

int DJ(int s,int d)
{
    add(s,0,1,0);
    while (!PQ.empty())
    {
        auto [node,f,t,w] = PQ.top();
        PQ.pop();
        if (f < mxf)
        {
            add(node,f+1,t,w+cost[node]);
        }
        if (t == 1)
        {
            add(node,mxf,0,w);
        }
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (f >= adj[node][i].w)
            {
                add(adj[node][i].node,f - adj[node][i].w,t,w);
            }
        }
    }
    return dis[d][mxf][0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    fill_n(dis[0][0],N*N*2,INT_MAX);
    int n,u,v,x,s,d,m,w;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    cin >> s >> d >> mxf;
    s--,d--;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        u--,v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cout << DJ(s,d);
    return 0;
}