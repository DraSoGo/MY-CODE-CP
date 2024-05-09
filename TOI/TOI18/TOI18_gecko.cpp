#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int u,w,p;
    bool operator < (const Graph & a)const
    {
        if (w == a.w)
        {
            return u > a.u;
        }
        return w > a.w;
    }
};

struct ADJ
{
    int node,w;
};


const int N =2e5+1;
int dist[N],K[N],fp[N];
vector <ADJ> adj[N];
priority_queue <Graph> PQ;
set <pair <int,int>> edg;

void DJ(int st)
{
    PQ.push({st,0,-1});
    fp[st] = -1;
    dist[st] = 0;
    while (!PQ.empty())
    {
        auto [u,w,p] = PQ.top();
        PQ.pop();
        if (w > dist[u])
        {
            continue;
        }
        if (p != -1)
        {
            fp[u] = p;
        }
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (dist[adj[u][i].node] > w + adj[u][i].w)
            {
                PQ.push({adj[u][i].node,dist[adj[u][i].node] = w + adj[u][i].w,u});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    fill(dist,dist+N,INT_MAX);
    int n,m,k,p,a,b,w;
    cin >> n >> m >> k >> p;
    for (int i = 0; i < k; i++)
    {
        cin >> K[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    DJ(p);
    for (int i = 0; i < k; i++)
    {
        cout << dist[K[i]] << " ";
    }
    cout << "\n";
    for (int i = 0; i < k; i++)
    {
        int x = K[i];
        while (x != p)
        {
            edg.insert({min(x,fp[x]),max(x,fp[x])});
            x = fp[x];
        }
    }
    cout << edg.size() << "\n";
    for(auto i:edg)
    {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}