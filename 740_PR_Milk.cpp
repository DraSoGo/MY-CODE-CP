#include <bits/stdc++.h>
using namespace std;

int par[100001];

int fp(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int u,v,n,e;
    char c;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> c >> u >> v;
        u--;v--;
        if (c == 'q')
        {
            if (par[fp(u)] == par[fp(v)])
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
        else
        {
            par[fp(u)] = par[fp(v)];
        }
    }
    return 0;
}