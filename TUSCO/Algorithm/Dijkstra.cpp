#include <bits/stdc++.h>
using namespace std;

priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> pq;

void ade(int s,int e,int w,vector <pair<int,int>> G[])
{
    G[s].push_back({e,w});
    G[e].push_back({s,w});
}

void sp(int mn[],vector <pair<int,int>> G[],int sr)
{
    int a,b;
    pair <int,int> t;
    mn[sr] = 0;
    pq.push({sr,0});
    while (!pq.empty())
    {
        t = pq.top();
        a = t.first;
        b = t.second;
        pq.pop();
        for (int i = 0; i < G[a].size(); i++)
        {
            if (b + G[a][i].second < mn[G[a][i].first])
            {
                mn[G[a][i].first] = b + G[a][i].second;
                pq.push({G[a][i].first,mn[G[a][i].first]});
            }
        }
    }
}

int main()
{
    int n = 9,inf = INT_MAX;
    int mn[n];
    vector <pair<int,int>> G[n];
    for (int i = 0; i < n; i++)
    {
        mn[i] = inf;
    }
    ade(0,1,4,G);
    ade(0,7,8,G);
    ade(1,7,11,G);
    ade(1,2,8,G);
    ade(7,8,7,G);
    ade(7,6,1,G);
    ade(2,8,2,G);
    ade(2,5,4,G);
    ade(2,3,7,G);
    ade(8,6,6,G);
    ade(6,5,2,G);
    ade(3,4,9,G);
    ade(3,5,14,G);
    ade(5,4,10,G);
    sp(mn,G,3);
    for (int i = 0; i < n; i++)
    {
        cout << mn[i] << " ";
    }

}