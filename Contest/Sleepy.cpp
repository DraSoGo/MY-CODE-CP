#include <bits/stdc++.h>
using namespace std;

long long co,m,n;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    int A[m+2][n],DP[m+2][n];
    memset(DP,0,sizeof(DP));
    for (int i = 0; i < m+2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m+1)
            {
                DP[i][j] = INT_MAX;
            }
            else
            {
                cin >> A[i][j];
                if (j == 0)
                {
                    DP[i][j] = A[i][j];
                }
            }
        }
    }
    int mn = INT_MAX;
    for (int j = 1; j < n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            DP[i][j] = A[i][j] + min(DP[i][j-1],min(DP[i-1][j-1],DP[i+1][j-1]));
            if (j == n-1)
            {
                mn = min(mn,DP[i][j]);
            }
        }
    }
    cout << mn;
    return 0;
}