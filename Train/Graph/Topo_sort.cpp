#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int n,e,u,v;
vector <int> G[sz];
queue <int> Q;
int indeg[sz];

void TPS()
{
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        cout << node+1 << " ";
        for(int nxt:G[node])
        {
            indeg[nxt]--;
            if (indeg[nxt] == 0)
            {
                Q.push(nxt);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        indeg[v]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            Q.push(i);
        }
    }
    TPS();
    return 0;
}
/*
INPUT
5 4
1 2
1 3
3 4
3 5
OUTPUT
1 2 3 4 5 
*/