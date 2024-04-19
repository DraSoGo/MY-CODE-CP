#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int u,w,t,ct;
    bool operator < (const Graph & b)const
    {
        return w > b.w;
    }
};

vector <Graph> adj[40003];
priority_queue <Graph> PQ;
int dist[40003][100];
int vis[40003][100];
pair <int,int> xy[40003];
int m,n,k,p;

int dis(int x1,int y1,int x2,int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

void DJ(int st,int ed)
{
    dist[st][0] = 0;
    // vis[st][0] = 1;
    PQ.push({st,0,0,0});
    while (!PQ.empty())
    {
        auto [u,w,t,ct] = PQ.top();
        cout << u << " " << w << " " << ct << "\n";
        PQ.pop();
        if (ct >= p)
        {
            continue;
        }
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (dist[adj[u][i].u][ct + adj[u][i].t] > adj[u][i].w + w)
            {
                dist[adj[u][i].u][ct + adj[u][i].t] = adj[u][i].w + w;
                PQ.push({adj[u][i].u,dist[adj[u][i].u][ct + adj[u][i].t],t,ct + adj[u][i].t});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a = 0,b = 1,x1,y1,x2,y2;
    cin >> m >> n >> k >> p;
    for (int i = 0; i < 40003; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            dist[i][j] = INT_MAX; 
            vis[i][j] = 0;
        }
    }
    adj[a].push_back({b,dis(0,0,m,n),0,0});
    for (int i = 2; i < (2*k)+2; i+=2)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        xy[i] = {x1,y1};
        xy[i+1] = {x2,y2};
        adj[a].push_back({i,dis(0,0,x1,y1),0,0});
        adj[i].push_back({i+1,0,1,0});
        adj[i+1].push_back({b,dis(x2,y2,m,n),0,0});
    }
    for (int i = 3; i < (2*k)+2; i+=2)
    {
        for (int j = 1; j < adj[a].size(); j++)
        {
            if (adj[a][j].u != i-1)
            {
                adj[i].push_back({adj[a][j].u,dis(xy[i].first,xy[i].second,xy[adj[a][j].u].first,xy[adj[a][j].u].second),0,0});
            }
        }
    }
    for (int i = 0; i < 2*k+2; i++)
    {
        cout << i << " :";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j].u << "," << adj[i][j].w << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    DJ(0,1);
    cout << "\n";
    for (int i = 0; i <= p; i++)
    {
        cout << dist[2][i] << "\n";
    }
    
    return 0;
}