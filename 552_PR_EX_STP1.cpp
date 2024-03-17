#include <bits/stdc++.h>
using namespace std;

priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> pq;

void ade(vector <pair<int,int>> G[],int u,int v,int w)
{
    G[u].push_back({v,w});
    G[v].push_back({u,w});
}

void sp(vector <pair<int,int>> G[],int mn[],int s)
{
    int a,b;
    pair <int,int> t;
    mn[s] = 0;
    pq.push({s,0});
    while (!pq.empty())
    {
        t = pq.top();
        a = t.first;
        b = t.second;
        pq.pop();
        for (int i = 0; i < G[a].size(); i++)
        {
            if (mn[G[a][i].first] > b + G[a][i].second)
            {
                mn[G[a][i].first] = b + G[a][i].second;
                pq.push({G[a][i].first,mn[G[a][i].first]});
            }
        }
    }
}

int main()
{
    int n,e,u,v,w,s1,e1;
    cin >> n >> e >> s1 >> e1;
    vector <pair<int,int>> G[n];
    int mn[n];
    for (int i = 0; i < n; i++)
    {
        mn[i] = INT_MAX;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        ade(G,u,v,w);
    }
    sp(G,mn,s1);
    cout << mn[e1];
}