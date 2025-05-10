#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
int n,e,u,v;
queue <int> Q;
vector <int> G[sz];
int in[sz];

void Topo()
{
    while (!Q.empty())
    {
        int node = Q.front();
        cout << node+1 << " ";
        Q.pop();
        for (auto nxt:G[node])
        {
            in[nxt]--;
            // cout << nxt << " " << in[nxt] << "\n";
            if (in[nxt] == 0)
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
        u--,v--;
        in[v]++;
        G[u].push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 0)
        {
            Q.push(i);
        }
    }
    Topo();
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