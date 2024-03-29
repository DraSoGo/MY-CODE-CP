#include <bits/stdc++.h>
using namespace std;

priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair <int,int>>> pq;
bool vis[1000];

void ade(vector <pair<int,int>> G[],int u,int v,int w)
{
    G[u].push_back({v,w});
    G[v].push_back({u,w});
}

void sp(vector <pair<int,int>> G[],int mn[],int s,int P[])
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
                P[G[a][i].first] = a;
            }
        }
    }
}

int main()
{
    int n,e,u,v,w,s1,e1,l;
    cin >> n >> e >> s1 >> e1;
    vector <pair<int,int>> G[n];
    vector <int> ans;
    int mn[n],P[n];
    for (int i = 0; i < n; i++)
    {
        mn[i] = INT_MAX;
        P[i] = -1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        ade(G,u,v,w);
    }
    sp(G,mn,s1,P);
    l = P[e1];
    ans.push_back(e1);
    while (P[l] != -1)
    {
        ans.push_back(l);
        l = P[l];
    }
    ans.push_back(s1);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    cout << "\n";
    cout << mn[e1];
}