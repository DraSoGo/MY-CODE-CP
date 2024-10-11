#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main()
{
    int n,w,ans = 0;
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> w;
        int val[n + 1],wt[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> wt[i];
        }
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                
                else if (j < wt[i - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j],val[i - 1] + dp[i - 1][j - wt[i - 1]]);
                }
            }
        }
        cout << dp[n][w] << "\n";
    }
}
