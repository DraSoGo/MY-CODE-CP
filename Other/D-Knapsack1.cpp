#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,w,a,b,ans,t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> w;
        pair <int,int> A[n];
        int DP[n+1][w+1];
        memset(DP,0,sizeof(DP));
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            A[i].second = b;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            A[i].first = a;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (A[i-1].first > j)
                {
                    DP[i][j] = DP[i-1][j];
                }
                else
                {
                    DP[i][j] = max(DP[i-1][j],A[i-1].second + DP[i-1][j-A[i-1].first]);
                }
                ans = max(ans,DP[i][j]);
            }
        }
        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= w; j++)
        //     {
        //         cout << DP[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << ans << "\n";
    }
    return 0;
}