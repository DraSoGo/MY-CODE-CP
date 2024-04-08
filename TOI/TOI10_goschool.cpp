#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n,c,x,y;
    cin >> n >> m;
    long long DP[m][n];
    memset(DP,-1,sizeof(DP));
    cin >> c;
    while (c--)
    {
        cin >> x >> y;
        x--;
        y = m - y;
        DP[y][x] = 0;
    }
    DP[m-1][0] = 1;
    for (long long i = m-1; i >= 0; i--)
    {
        for (long long j = 0; j < n; j++)
        {
            if (DP[i][j] == 0)
            {
                continue;
            }
            if (i == m-1 && j == 0)
            {
                continue;
            }
            else if (i == m-1)
            {
                DP[i][j] = DP[i][j-1];
            }
            else if (j == 0)
            {
                DP[i][j] = DP[i+1][j];
            }
            else
            {
                DP[i][j] = DP[i+1][j] + DP[i][j-1];
            }
        }
    }
    cout << DP[0][n-1];
    return 0;   
}