#include <bits/stdc++.h>
using namespace std;

const int sz = 2e3+1;
int n,m,q;
int A[sz][sz];
int par[sz];
int mem[sz];

int check(int a,int b)
{
    if (a!=-1)
    {
        return a;
    }
    return b;
}

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void merge(int a, int b,int d)
{
    int o;
    if (mem[a] < mem[b])
    {
        o = par[a];
        for (int i = 0; i < n; i++)
        {
            if (par[i] == o)
            {
                par[i] = b;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (par[i] == par[j])
                {
                    A[i][j] = check(A[i][j],d);
                    A[j][i] = check(A[j][i],d);
                }
            }
        }
        
        mem[b] += mem[a];
    }
    else
    {
        o = par[b];
        for (int i = 0; i < n; i++)
        {
            if (par[i] == o)
            {
                par[i] = a;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (par[i] == par[j])
                {
                    A[i][j] = check(A[i][j],d);
                    A[j][i] = check(A[j][i],d);
                }
            }
        }
        mem[a] += mem[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int u, v;
    for (int i = 0; i < 2001; i++)
    {
        par[i] = i;
        mem[i] = 1;
        for (int j = 0; j < 2001; j++)
        {
            A[i][j] = -1;
        }
    }

    cin >> n >> m >> q;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        u--, v--;
        u = fp(u);
        v = fp(v);
        merge(u,v,i);
    }
            
    
    while (q--)
    {
        cin >> u >> v;
        u--, v--;
        cout << A[u][v] << "\n";
    }

    return 0;
}