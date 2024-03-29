#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,c,a = 1e9;
    cin >> n >> c;
    int A[c],dp[n+1];
    for (int i = 0; i < c; i++)
    {
        cin >> A[i];
        if (A[i] <= n)
        {
            dp[A[i]] = 1;
        }
    }
    sort(A,A+c);
    dp[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        dp[i] = 1e9;
        for (int j = 0; j < c; j++)
        {
            if (i-A[j] < 0)
            {
                break;
            }
            dp[i] = min(dp[i],1+dp[i-A[j]]);
        }
    }
    cout << dp[n];
    return 0;
}