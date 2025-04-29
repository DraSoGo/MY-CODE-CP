//https://atcoder.jp/contests/dp/tasks/dp_i
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    double A[n+1],DP[n+1][n+1];
    memset(DP,0,sizeof(DP));
    DP[0][0] = 1;
    for (int i = 1; i < n+1; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            DP[i][j] += DP[i-1][j]*(1-A[i]);
            if (j > 0)
            {
                DP[i][j] += DP[i-1][j-1] * A[i];
            }
        }
    }
    double ans = 0;
    for (int i = (n+1)/2; i <= n; i++)
    {
        ans += DP[n][i];
    }
    cout << fixed << setprecision(10) << ans;
    return 0;
}