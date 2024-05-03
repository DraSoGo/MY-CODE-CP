#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int u;
    int w;
    int c;
    bool operator < (const Graph & a)const
    {
        return w > a.w;
    }
};


vector <pair<int,int>> V[2001];
priority_queue <Graph> PQ;
int dist[2001][2001],mndist = 1e18,mncnt = 1e18;

void DJ(int st,int ed,int n)
{
    dist[st][0] = 0;
    PQ.push({st,0,0});
    while (!PQ.empty())
    {
        auto [u,w,c] = PQ.top();
        PQ.pop();
        if (c >= n)
        {
            continue;
        }
        if (u == ed)
        {
            mndist = min(mndist,w);
            mncnt = min(mncnt,c);
        }
        for (int i = 0; i < V[u].size(); i++)
        {
            if ( (c+1 < mncnt || dist[V[u][i].first][c+1] < mndist) && dist[V[u][i].first][c+1] > V[u][i].second + w)
            {
                PQ.push({V[u][i].first,dist[V[u][i].first][c+1] = V[u][i].second + w,c+1});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,e,u,v,w,q,x;
    cin >> n >> a >> b >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        V[u].push_back({v,w});
    }
    for (int i = 0; i < 2001; i++)
    {
        for (int j = 0; j < 2001; j++)
        {
            dist[i][j] = 1e9+1; 
        }
    }
    DJ(a,b,n);
    cin >> q;
    while (q--)
    {
        cin >> x;
        int mn = dist[b][1];
        for (int i = 2; i <= n; i++)
        {
            mn = min(mn,dist[b][i] + i*x - x);
        }
        cout << mn << " ";
    }
    return 0;
}