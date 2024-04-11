#include <bits/stdc++.h>
using namespace std;
struct Graph
{
    int u,v,w;
    bool operator < (const Graph & a)const
    {
        return w < a.w;
    }
};

pair <int,int> pack[300001];
int par[3001];
vector <Graph> no;

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int p,n,e,u,v,w,k,c,d;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w >> k;
        if (k == 0)
        {
            no.push_back({u,v,w});
        }
        else
        {
            par[fp(v)] = par[fp(u)];
        }
    }
    sort(no.begin(),no.end());
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> c >> d;
        pack[i] = {c,d};
    }
    sort(pack,pack+p);
    int sum = 0;
    for (int i = 0; i < no.size(); i++)
    {
        int a = no[i].u,b = no[i].v,c = no[i].w;
        if (fp(a) == fp(b))
        {
            continue;
        }
        int mn = INT_MAX;
        for (int j = 0; j < p; j++)
        {
            if (pack[j].first >= c)
            {
                mn = min(mn,pack[j].second);
            }
        }
        sum += mn;
        par[fp(a)] = par[fp(b)];
    }
    cout << sum;
    return 0;
}