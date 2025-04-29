#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    if (((n*(n+1))/2) % 2 == 1)
    {
        cout << 0;
        return 0;
    }
    long long mxsum = ((n*(n+1))/2)/2;
    long long DP[n+1][mxsum+1],MOD = 1e9+7;
    memset(DP,0,sizeof(DP));
    DP[0][0] = 1;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < mxsum+1; j++)
        {
            DP[i][j] = DP[i-1][j];
            if (i <= j)
            {
                DP[i][j] += DP[i-1][j-i];
            }
            DP[i][j] %= MOD;
            // cout << DP[i][j] << " ";
        }
        // cout << "\n";
    }
    cout << DP[n][mxsum];
    return 0;
}