#include <bits/stdc++.h>
using namespace std;
int par[100001];

int root(int x)
{
    if (par[x] != x)
    {
        return par[x] = root(par[x]);
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,r,s,q,a,b;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> r >> s;
        par[root(r)] = par[root(s)];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        if (par[root(a)] == par[root(b)])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}