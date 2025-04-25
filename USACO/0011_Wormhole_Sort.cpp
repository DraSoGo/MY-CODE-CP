#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long u,v,w;
    bool operator < (const GP&a)const
    {
        return w < a.w;
    }
};


const int sz = 1e5+1;
long long n,e,u,v,w,ans = INT_MAX,tans;
int IDX[sz],par[sz],mem[sz];
vector <GP> AG;
queue <GP> G;

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
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream fin("wormsort.in");
    ofstream fout("wormsort.out");
    cin >> n >> e;
    bool chs = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> IDX[i];
        IDX[i]--;
        if (IDX[i] != i)
        {
            chs = 1;
        }
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        u--,v--;
        AG.push_back({u,v,w});
    }
    if (!chs)
    {
        cout << -1;
        return 0;
    }
    
    long long l = 0,r = INT_MAX,mid;
    bool ch;
    while (l < r)
    {
        ch = 1;
        mid = (l+r)/2;
        // cout << l << " " << mid << " " << r << "\n";
        for (int i = 0; i < e; i++)
        {
            if (AG[i].w >= mid)
            {
                G.push(AG[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            mem[i] = 1;
            par[i] = i;
        }
        while (!G.empty())
        {
            auto [u,v,w] = G.front();
            // cout << u+1 << " " << v+1 << " " << w << "\n";
            G.pop();
            int pu = fp(u),pv = fp(v);
            if (pu != pv)
            {
                ans = min(ans,w);
                if (mem[pu] > mem[pv])
                {
                    mem[pu] += mem[pv];
                    mem[pv] = 0;
                    par[pv] = pu;
                }
                else
                {
                    mem[pv] += mem[pu];
                    mem[pu] = 0;
                    par[pu] = pv;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << par[i] << " ";
        // }
        // cout << "\n";
        for (int i = 0; i < n; i++)
        {
            if (IDX[i] != i && fp(IDX[i]) != fp(i))
            {
                ch = 0;
                break;
            }
        }
        // cout << ch << "\n------\n";
        if (ch)
        {
            l = mid+1;
            tans = ans;
            ans = INT_MAX;
            // ans = min(ans,mid);
        }
        else
        {
            r = mid;
        }
    }
    cout << tans;
    return 0;
}