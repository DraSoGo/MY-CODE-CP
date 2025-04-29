#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    int MOD = 1e9+7;
    cin >> n >> m;
    int DP[m+1][n],K[n];
    memset(DP,0,sizeof(DP));
    for (int i = 0; i < n; i++)
    {
        cin >> K[i];
    }
    if (K[0] == 0)
    {
        for (int i = 0; i < m+1; i++)
        {
            DP[i][0] = 1;
        }
    }
    else
    {
        DP[K[0]][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (K[i] == 0)
        {
            for (int j = 1; j < m+1; j++)
            {
                // if (abs(j-K[i+1] <= 1 || K[i+1] == 0))
                // {
                //     DP[j][i] += DP[j][i-1];
                // }
                DP[j][i] += DP[j][i-1];
                DP[j][i] %= MOD;
                if (j > 1)
                {
                    DP[j][i] += DP[j-1][i-1];
                    DP[j][i] %= MOD;
                }
                if (j < m)
                {
                    DP[j][i] += DP[j+1][i-1];
                    DP[j][i] %= MOD;
                }
            }
        }
        else
        {
            DP[K[i]][i] += DP[K[i]][i-1];
            DP[K[i]][i] %= MOD;
            if (K[i] > 1)
            {
                DP[K[i]][i] += DP[K[i]-1][i-1];
                DP[K[i]][i] %= MOD;
            }
            if (K[i] < m)
            {
                DP[K[i]][i] += DP[K[i]+1][i-1];
                DP[K[i]][i] %= MOD;
            }
            // DP[K[i]][i] += DP[K[i]][i-1] + DP[K[i]-1][i-1] + DP[K[i]+1][i-1];
        }
    }
    // cout << DP[K[n-1]][n-1];
    if (K[n-1] == 0)
    {
        int sum = 0;
        for (int j = 1; j <= m; j++)
        {
            sum = (sum + DP[j][n-1]);
            sum %= MOD;
        }
        sum %= MOD;
        cout << sum;
    }
    else
    {
        cout << DP[K[n-1]][n-1];
    }
    return 0;
}