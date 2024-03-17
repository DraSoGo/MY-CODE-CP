#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> G[1000];
vector <int> ans;
int P[1000];
priority_queue <pair<int,int>,vector <pair<int,int>>> pq;

void ade(int v,int u,int w)
{
    G[v].push_back({u,w});
    //G[u].push_back({v,w});
}

void DJT(int s,int d[])
{
    int a,b;
    pair <int,int> t;
    d[s] = 0;
    P[s] = -2;
    pq.push({s,d[s]});
    while (!pq.empty())
    {
        t = pq.top();
        a = t.first;
        b = t.second;
        pq.pop();
        for (int i = 0; i < G[a].size(); i++)
        {
            if (d[G[a][i].first] < G[a][i].second + d[a])
            {
                d[G[a][i].first] = G[a][i].second + d[a];
                pq.push({G[a][i].first,d[G[a][i].first]});
                P[G[a][i].first] = a;
            }
        }
    }
}

int main()
{
    int n,e,s1,e1,v,u,w,x;
    cin >> n >> e >> s1 >> e1;
    int d[n];
    for (int i = 0; i <= n; i++)
    {
        d[i] = -1;
    }
    
    for (int i = 0; i < e; i++)
    {
        cin >> v >> u >> w;
        // v--;
        // u--;
        ade(v,u,w);
    }
    DJT(s1,d);

    x = e1;
    while (x != -2)
    {
        ans.push_back(x);
        x = P[x];
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    cout << "\n" << d[e1];
}