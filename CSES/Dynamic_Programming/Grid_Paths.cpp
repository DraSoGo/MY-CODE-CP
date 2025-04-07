#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int DP[n+1][n+1];
    char T[n+1][n+1];
    memset(DP,0,sizeof(DP));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> T[i][j];
        }
    }
    T[1][1] == '*'?DP[1][1] = 0:DP[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (T[i][j] == '*' || (i == 1 && j == 1))
            {
                // cout << DP[i][j] << " ";
                continue;
            }
            DP[i][j] = DP[i-1][j] + DP[i][j-1];
            DP[i][j] %= int(1e9+7);
            // cout << DP[i][j] << " ";
        }
        // cout << "\n";
    }
    cout << DP[n][n];
    return 0;
}