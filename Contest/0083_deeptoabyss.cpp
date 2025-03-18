#include <bits/stdc++.h>
using namespace std;

const int MD = 1e9+7;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,f,ans = 0;
    cin >> n >> m >> f;
    char T[f][n][m];
    int DP[f][n][m];
    memset(DP,0,sizeof(DP));
    for (int k = 0; k < f; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> T[k][i][j];
            }
        }
    }
    DP[0][0][0] = 1;
    for (int k = 0; k < f; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0 && k == 0)
                {
                    // cout << DP[k][i][j] << " ";
                    continue;
                }
                if (T[k][i][j] == 'O')
                {
                    // cout << DP[k][i][j] << " ";
                    // cout << 0 << " ";
                    continue;
                }
                if (k < f-1)
                {
                    if (i > 0 && T[k][i-1][j] == '#')
                    {
                        DP[k][i][j] += DP[k][i-1][j];
                    }
                    if (j > 0 && T[k][i][j-1] == '#')
                    {
                        DP[k][i][j] += DP[k][i][j-1];
                    }
                }
                // cout << DP[k][i][j] << " ";
                DP[k][i][j] %= MD;
                if (i > 0 && T[k-1][i-1][j] == '#' && T[k-1][i][j] == 'O')
                {
                    DP[k][i][j] += DP[k-1][i-1][j];
                }
                DP[k][i][j] %= MD;
                if (j > 0 && T[k-1][i][j-1] == '#' && T[k-1][i][j] == 'O')
                {
                    DP[k][i][j] += DP[k-1][i][j-1];
                }
                DP[k][i][j] %= MD;
                if (i > 1 && T[k-1][i-2][j] == '#' && T[k-1][i-1][j] == 'O')
                {
                    DP[k][i][j] += DP[k-1][i-2][j];
                }
                DP[k][i][j] %= MD;
                if (j > 1 && T[k-1][i][j-2] == '#' && T[k-1][i][j-1] == 'O')
                {
                    DP[k][i][j] += DP[k-1][i][j-2];
                }
                DP[k][i][j] %= MD;
                if (k == f-1)
                {
                    ans += DP[k][i][j];
                    ans %= MD;
                }
            }
            // cout << "\n";
        }
        // cout << "\n";
    }
    cout << ans;
    return 0;
}