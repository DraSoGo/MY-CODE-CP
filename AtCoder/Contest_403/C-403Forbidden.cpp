//https://atcoder.jp/contests/abc403/tasks/abc403_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,q,x,y,c;
    cin >> n >> m >> q;
    unordered_set<int> S[n+1];
    bool vis[n+1];
    memset(vis,0,sizeof(vis));
    for (int i = 0; i < q; i++)
    {
        cin >> c;
        if (c == 1)
        {
            cin >> x >> y;
            S[x].insert(y);
        }
        else if (c == 2)
        {
            cin >> x;
            vis[x] = 1;
        }
        else
        {
            cin >> x >> y;
            if (S[x].count(y)|| vis[x] == 1)
            {
                cout << "Yes\n";
                continue;
            }
            cout << "No\n";
        }
    }
    return 0;
}