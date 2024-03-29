#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k,l,mx = 0;
    cin >> m >> n >> k;
    l = k - 2;
    int QS[m+1][n+1],A[m][n];
    memset(QS,0,sizeof(QS));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if (i == 0 && j == 0)
            {
                QS[i+1][j+1] = A[i][j];
            }
            else if (i == 0)
            {
                QS[i+1][j+1] = A[i][j] + QS[i+1][j];
            }
            else if (j == 0)
            {
                QS[i+1][j+1] = A[i][j] + QS[i][j+1];
            }
            else
            {
                QS[i+1][j+1] = A[i][j] + QS[i+1][j] + QS[i][j+1] - QS[i][j];
            }
        }
    }
    for (int i = k; i <= m; i++)
    {
        for (int j = k; j <= n; j++)
        {
            mx = max(mx,(QS[i][j]+QS[i-k][j-k]-QS[i][j-k]-QS[i-k][j])-(QS[i-1][j-1]+QS[i-l-1][j-l-1]-QS[i-1][j-l-1]-QS[i-l-1][j-1]));
        }
    }
    cout << mx;
    return 0;
}