#include <bits/stdc++.h>
using namespace std;

const int N = 4005;
int dp[N][N];
int a[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> M;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (M.find(a[i]) == M.end())
        {
            M[a[i]] = idx++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = M[a[i]];
        cout << a[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i][a[j]] = max(dp[i][a[j]], dp[j][a[i]] + 1);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " " << a[i] << " " << j << "\n";
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << '\n';
    return 0;
}
