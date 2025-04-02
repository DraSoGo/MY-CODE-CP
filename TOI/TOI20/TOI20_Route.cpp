#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u, v, w;
    bool operator<(const GP &a) const
    {
        return a.w < w;
    }
};

const int sz = 3e5 + 1;
int n, k, x, co;
priority_queue<GP> PQ;
int par[sz], mem[sz];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void KK()
{
    while (!PQ.empty())
    {
        auto [u, v, w] = PQ.top();
        PQ.pop();
        int pu = fp(u), pv = fp(v);
        if (pu != pv)
        {
            co += w;
            if (mem[pu] >= mem[pu])
            {
                mem[pu] += mem[pv];
                par[pv] = pu;
            }
            else
            {
                mem[pv] += mem[pu];
                par[pu] = pv;
            }
        }
    }
}

vector<pair<int, int>> route(int n, vector<int> w)
{
    int m = w.size();
    vector<pair<int, int>> e;
    int mx = 0, cyc = m - n + 2, u = 1, v = 2;
    for (int i = 0; i < cyc; i++)
    {
        mx = max(mx, v);
        e.emplace_back(u++, v);
        if (u == v)
        {
            u = 1, v++, cyc++;
        }
    }
    for (int i = mx + 1; i <= n; i++)
    {
        e.emplace_back(1, i);
    }
    return e;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n + 1; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    vector<int> V;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    vector<pair<int, int>> A = route(n, V);
    for (int i = 0; i < k; i++)
    {
        auto [u, v] = A[i];
        cout << u << " " << v << " " << V[i] << "\n";
        PQ.push({u, v, V[i]});
    }
    KK();
    cout << co;
    return 0;
}