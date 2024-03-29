#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n;
    int A[n][3],DP[n][3];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
            if (i == 0)
            {
                DP[i][j] = A[i][j];
                ans = max(DP[i][j],ans);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int mx = 0;
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {
                    mx = max(DP[i-1][k],mx);
                }
                
            }
            DP[i][j] = mx + A[i][j];
            ans = max(ans,DP[i][j]);
        }
    }
    cout << ans;
    return 0;
}