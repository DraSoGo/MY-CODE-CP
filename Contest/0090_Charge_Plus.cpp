#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+10;
int u,v,n,e;
char c;
int par[2*sz],mem[2*sz];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void unite(int a,int b)
{
    int pa = fp(a),pb = fp(b);
    if (pa != pb)
    {
        if (mem[pa] > mem[pb])
        {
            mem[pa] += mem[pb];
            par[pb] = pa;
        }
        else
        {
            mem[pb] += mem[pa];
            par[pa] = pb;
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < 2*sz; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> c >> u >> v;
        if (c == 'R')
        {
            if (fp(u) == fp(v+sz))
            {
                cout << "X\n";
                continue;
            }
            unite(u,v);
            unite(u+sz,v+sz);
        }
        else if (c == 'A')
        {
            if (fp(u) == fp(v))
            {
                cout << "X\n";
                continue;
            }
            unite(u,v+sz);
            unite(u+sz,v);
        }
        else
        {
            if (fp(u) == fp(v) && fp(u+sz) == fp(v+sz))
            {
                cout << "R\n";
            }
            else if (fp(u) == fp(v+sz) && fp(u+sz) == fp(v))
            {
                cout << "A\n";
            }
            else
            {
                cout << "?\n";
            }
            
        }
    }
    
    return 0;
}
