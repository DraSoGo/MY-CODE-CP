#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v,p,q;
    double ans;
    bool operator < (const GP&a)const
    {
        return a.ans > ans;
    }
};

const int sz = 1e5+1;

vector <GP> G[sz];
GP dis[sz];
bool vis[sz];
priority_queue <GP> PQ;
int n,e,u,v,p,q,ansp,ansq;

void prim_al(int st)
{
    PQ.push({st,0,0,0});
    while (!PQ.empty())
    {
        auto [node,p,q,w] = PQ.top();
        PQ.pop();
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        ansp += p;
        ansq += q;
        for(auto [nxt,np,nq,nw] : G[node])
        {
            if (nw < dis[nxt].ans)
            {
                PQ.push({nxt,np,nq,nw});
                dis[nxt] = {nxt,np,nq,nw};
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        dis[i] = {0,0,0,9999.88};
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> p >> q;
        // u--;
        // v--;
        G[u].push_back({v,p,q,double(p/q)});
    }
    prim_al(0);
    cout << ansp << "/" << ansq;
    return 0;
}