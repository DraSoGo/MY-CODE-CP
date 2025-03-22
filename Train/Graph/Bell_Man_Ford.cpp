#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
};

const int sz = 1e5;
int n,e,u,v,w,st,ch;
vector <GP> G;
int dis[sz];

bool BMF(int st)
{
    dis[st] = 0;
    for (int i = 0; i < n; i++)
    {
        for(auto [u,v,w]:G)
        {
            if (dis[v] > dis[u] + w)
            {
                if (i == n-1)
                {
                    ch = 1;
                }
                dis[v] = dis[u] + w;
            }
        }
    }
    if (ch)
    {
        return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> st;
    st--;
    fill(dis,dis + sz,INT_MAX);
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        G.push_back({u,v,w});
    }
    if(!BMF(st))
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << "\n";
    }
    
    return 0;
}
/*
INPUT
5 7 1
1 2 6
1 3 7
2 3 8
2 4 5
2 5 -4
3 4 -3
4 5 9
OUTPUT
0
6
7
4
2
*/

/*
INPUT
4 5 1
1 2 1
2 3 -2
3 4 -1
4 2 -2
2 4 2
OUTPUT
-1
*/