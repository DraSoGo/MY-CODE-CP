#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> G[1000];
priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> pq;

void ade(int v,int u,int w)
{
    G[v].push_back({u,w});
    G[u].push_back({v,w});
}

void DJT(int s,int d[])
{
    pair <int,int> t;
    int a,b;
    d[s] = 0;
    pq.push({s,d[s]});
    while (!pq.empty())
    {
        t = pq.top();
        a = t.first;
        b = t.second;
        pq.pop();
        for (int i = 0; i < G[a].size(); i++)
        {
            if (d[G[a][i].first] > G[a][i].second + d[a])
            {
                d[G[a][i].first] = G[a][i].second + d[a];
                pq.push({G[a][i].first,d[G[a][i].first]});
            }
        }
    }
}

int main()
{
    vector <int> pt;
    int n,e,s1,e1,m,v,u,w,a,b,c = INT_MAX;
    cin >> n >> e >> s1 >> e1 >> m;
    int ds[n],de[n];
    for (int i = 0; i < n; i++)
    {
        ds[i] = INT_MAX;
        de[i] = INT_MAX;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> v >> u >> w;
        ade(v,u,w);
    }
    DJT(s1,ds);
    DJT(e1,de);
    for (int i = 0; i < n; i++)
    {
        if (ds[i] <= m)
        {
            pt.push_back(i);
        }
        
    }
    for (int i = 0; i < pt.size(); i++)
    {
        if (de[pt[i]] < c)
        {
            a = pt[i];
            b = ds[pt[i]];
            c = de[pt[i]];
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}