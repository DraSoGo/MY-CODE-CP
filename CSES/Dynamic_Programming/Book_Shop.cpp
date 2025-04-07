#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,c;
    cin >> n >> c;
    int DP[n+1][c+1],B[n+1],C[n+1];
    
    memset(DP,0,sizeof(DP));
    for (int i = 1; i <= n; i++)
    {
        cin >> C[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (j < C[i])
            {
                DP[i][j] = DP[i-1][j];
            }
            else
            {
                DP[i][j] = max(DP[i-1][j],DP[i-1][j-C[i]]+B[i]);
            }
        }
    }
    cout << DP[n][c];
    return 0;
}