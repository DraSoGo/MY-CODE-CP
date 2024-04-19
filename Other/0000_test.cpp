#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 505;
ll x[N], y[N], dp[N][N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
        dp[1][i] = abs(x[i] - x[1]) + abs(y[i] - y[1]);
    }
    for (int k = 2; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            dp[k][i] = 1e18;
            for (int j = 1; j <= n; j++)
            {
                dp[k][i] = min(dp[k][i], max(dp[k - 1][j], abs(x[i] - x[j]) + abs(y[i] - y[j])));
            }
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << dp[k][i] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int k = 1; k <= n; k++)
    {
        cout << dp[k][n] << " ";
    }
    cout << "\n";
    ll ans = 0;
    while (m--)
    {
        ll x;
        cin >> x;
        for (int i = 1; i <= n; i++)
        {
            if (x >= dp[i][n])
            {
                ans += i;
                break;
            }
        }
        //		cout << ans << ' ' <<x << "\n";
    }
    cout << ans;
}