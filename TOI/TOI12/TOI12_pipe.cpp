#include <bits/stdc++.h>
using namespace std;

const int sz = 2e4;
int n,e,x,y,u,v,w,k,g,ans,nxt;
vector <pair <int,int>> P;
int dis[sz];
bool vis[sz];

void prim(int st)
{
    for (int i = 0; i < n; i++)
    {
        vis[st] = 1;
        int mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (vis[j])
            {
                continue;
            }
            dis[j] = min(dis[j],abs(P[st].first - P[j].first) + abs(P[st].second - P[j].second));
            if (dis[j] < mn)
            {
                mn = dis[j];
                nxt = j;
            }
        }
        st = nxt;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    g = n;
    fill(dis,dis+sz,INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        P.push_back({x,y});
    }
    prim(0);
    sort(dis,dis+n);
    for (int i = 0; i < n-k; i++)
    {
        // cout << dis[i] << "\n";
        ans += dis[i];
    }
    cout << ans;
    return 0;
}