#include <bits/stdc++.h>
using namespace std;

long long par[100001];
long long fp(long long a)
{
    if (a != par[a])
    {
        return par[a] = fp(par[a]);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio();cin.tie();cout.tie();
    for (long long i = 0; i < 100001; i++)
    {
        par[i] = i;
    }
    
    char cm;
    long long n,q,u,v,a,b;
    cin >> n >> q;
    for (long long i = 0; i < q; i++)
    {
        cin >> cm >> u >> v;
        if (cm == 'c')
        {
            par[fp(u)] = par[fp(v)];
        }
        else
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
    }
    
    return 0;
}