#include <bits/stdc++.h>
using namespace std;

priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> pq;

void ade(int x,int y,int w,vector <pair<int,int>> G[])
{
    G[x].push_back({y,w});
    G[y].push_back({x,w});
}

void Dj(int st,int mn[],vector <pair<int,int>> G[])
{
    mn[st] = 0;
    pq.push({st,0});
    while (!pq.empty())
    {
        auto [n,w] = pq.top();
        pq.pop();
        for (int i = 0; i < G[n].size(); i++)
        {
            if (w+G[n][i].second < mn[G[n][i].first])
            {
                mn[G[n][i].first] = w+G[n][i].second;
                pq.push({G[n][i].first,mn[G[n][i].first]});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n,d1,d2,x,y,w;
    cin >> n >> m >> d1 >> d2;
    int A[2] = {d1,d2};
    vector <pair<int,int>> G[n];
    int mn1[n];
    int mn2[n];
    int mn[n];
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        ade(x-1,y-1,w,G);
    }
    for (int i = 0; i < n; i++)
    {
        mn1[i] = INT_MAX;
        mn2[i] = INT_MAX;
        mn[i] = INT_MAX;
    }
    Dj(d2-1,mn2,G);
    Dj(d1-1,mn1,G);
    for (int i = 0; i < n; i++)
    {
        cout << mn1[i] << " " << mn2[i] << "\n";
    }
    return 0;
}