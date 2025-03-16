#include <bits/stdc++.h>
using namespace std;

struct ED
{
    int u,v,w;
};


const int sz = 1e5;
int dis[sz],pre[sz];
int n,e,s,u,v,w;
vector <ED> ed;

bool BMF(int st)
{
    dis[s] = 0;
    for (int i = 0; i < n; i++)
    {
        for(auto [u,v,w] : ed)
        {
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                if (i == n-1)
                {
                    return 1;
                }
                pre[v] = u;
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(dis,dis+sz,99999);
    fill(pre,pre+sz,-1);
    cin >> n >> e >> s;
    s--;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        ed.push_back({u,v,w});
    }
    if (BMF(s))
    {
        cout << "negative cycle";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << " ";
    }
    return 0;
}
/*
5
8
0
0 1 -1
0 2 4
1 2 3
1 3 2
3 1 1
3 2 5
1 4 2
4 3 -3
*/