#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k,mx = INT_MIN;
    cin >> n >> m >> k;
    int T1[n+1][m+1],T2[n+1][m+1];
    int QST[n+1][m+1],QSS[n+1][m+1];
    memset(QST,0,sizeof(QST));
    memset(QSS,0,sizeof(QSS));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> T1[i][j];
            T2[i][m-j+1] = T1[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            QSS[i][j] = T1[i][j] + QSS[i-1][j] + QSS[i][j-1] - QSS[i-1][j-1];
            if (i >= 2 && j >= 2)
            {
                QST[i][j] = T1[i][j] + QST[i][j-1] + QST[i-1][j-1] - QST[i-1][j-2];
            }
            else if(i == 1)
            {
                QST[i][j] = T1[i][j] + QST[i][j-1];
            }
            else
            {
                QST[i][j] = T1[i][j];
            }
            
            // cout << QST[i][j] << " ";
        }
        // cout << "\n";
    }
    for (int i = k; i <= n; i++)
    {
        for (int j = k; j <= m; j++)
        {
            mx = max(mx,QST[i][j]-(QSS[i][j-k]-QSS[i-k][j-k])-QST[i-k][j-k]);
        }
    }
    memset(QST,0,sizeof(QST));
    memset(QSS,0,sizeof(QSS));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            QSS[i][j] = T2[i][j] + QSS[i-1][j] + QSS[i][j-1] - QSS[i-1][j-1];
            if (i >= 2 && j >= 2)
            {
                QST[i][j] = T2[i][j] + QST[i][j-1] + QST[i-1][j-1] - QST[i-1][j-2];
            }
            else if(i == 1)
            {
                QST[i][j] = T2[i][j] + QST[i][j-1];
            }
            else
            {
                QST[i][j] = T2[i][j];
            }
            
            // cout << QST[i][j] << " ";
        }
        // cout << "\n";
    }
    for (int i = k; i <= n; i++)
    {
        for (int j = k; j <= m; j++)
        {
            mx = max(mx,QST[i][j]-(QSS[i][j-k]-QSS[i-k][j-k])-QST[i-k][j-k]);
        }
    }
    cout << mx;
    return 0;
}