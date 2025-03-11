#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int A[n+1],B[n+1],DP[n+1][n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i+1];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i+1];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                DP[i][j] = 0;
                continue;
            }
            if (A[i] > B[j])
            {
                DP[i][j] = DP[i-1][j-1] + 1;
            }
            else
            {
                DP[i][j] = max(DP[i][j-1],DP[i-1][j]);
            }
        }
    }
    cout << 2*(n-DP[n][n]);
    return 0;
}