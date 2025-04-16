#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n,a,b,q;
    cin >> m >> n >> q;
    bool vis[n+1][m+1];
    long long DP[n+2][m+1];
    memset(DP,0,sizeof(DP));
    memset(vis,0,sizeof(vis));
    while (q--)
    {
        cin >> a >> b;
        vis[n-b+1][a] = 1;
    }
    DP[n][1] = 1;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j < m+1; j++)
        {
            if (!vis[i][j])
            {
                DP[i][j] += DP[i+1][j] + DP[i][j-1];
            }
        }
    }
    cout << DP[1][m];
    return 0;
}