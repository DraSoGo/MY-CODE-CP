#include <bits/stdc++.h>
using namespace std;

long long par[200001];
long long val[200001];

struct Graph
{
    long long u,v,w;
    bool operator < (const Graph & a) const
    {
        return w > a.w;
    }
};
Graph A[1000001];

long long findpar(long long x)
{
    if (par[x] == x)
    {
        return x;
    }
    else
    {
        return par[x] = findpar(par[x]);
    }
}

long long kruskal(long long e)
{
    long long sum = 0;
    for (int i = 0; i < e; i++)
    {
        long long a = A[i].u,b = A[i].v,c = A[i].w;
        if (findpar(a) != findpar(b))
        {
            if (val[par[a]] > val[par[b]])
            {
                val[par[a]] += val[par[b]];
                par[par[b]] = par[a];
            }
            else
            {
                val[par[b]] += val[par[a]];
                par[par[a]] = par[b];
            }
            sum += c;
        }
    }
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,e;
    cin >> n >> e;
    long long u,v,w;
    for (long long i = 0; i < n; i++)
    {
        par[i] = i;
        val[i] = 1;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--;
        v--;
        w--;
        A[i].u = u;
        A[i].v = v;
        A[i].w = w;
    }
    sort(A,A+e);
    cout << kruskal(e);
    return 0;
}