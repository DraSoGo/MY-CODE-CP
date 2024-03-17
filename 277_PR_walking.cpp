#include<bits/stdc++.h>
using namespace std;
int x[1000][1000],dp[1000][1000];
int main()
{
    int n,m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    memset(dp,0,sizeof(dp));
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (j == 0)
            {
                dp[i][j] = x[i][j];
            }
            else
            {
                if (i == 0)
                {
                    dp[i][j] = x[i][j] + max(dp[i][j - 1],dp[i + 1][j - 1]);
                }
                else if (i == m - 1)
                {
                    dp[i][j] = x[i][j] + max(dp[i - 1][j - 1],dp[i][j - 1]);
                }
                else
                {
                    dp[i][j] = x[i][j] + max(dp[i - 1][j - 1],max(dp[i][j - 1],dp[i + 1][j - 1]));
                }
                
            }
        }
        
    }
    int ans = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        ans = max(ans,dp[i][n - 1]);
    }
    cout << ans;
}