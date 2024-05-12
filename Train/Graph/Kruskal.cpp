#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int u,v,w;
    bool operator < (const Graph & a)const
    {
        return w > a.w;
    }
};

const int N= 1000;
priority_queue <Graph> PQ;
int par[N],mem[N];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

int KK()
{
    int ans = 0;
    while (!PQ.empty())
    {
        auto[u,v,w] = PQ.top();
        PQ.pop();
        if (fp(u) != fp(v))
        {
            if (mem[par[u]] > mem[par[v]])
            {
                mem[par[u]] += mem[par[v]];
                par[par[v]] = par[u];
            }
            else
            {
                mem[par[v]] += mem[par[u]];
                par[par[u]] = par[v];
            }
            ans += w;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,e,u,v,w;
    cin >> n >> e;
    for (int i = 0; i < N; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        PQ.push({u,v,w});
    }
    cout << KK();
    return 0;
}
/*
INPUT
6 9
0 1 2
1 2 3
1 4 2
2 3 4
1 3 2
3 4 5
4 0 1
0 5 1
5 4 6
OUTPUT
9
*/