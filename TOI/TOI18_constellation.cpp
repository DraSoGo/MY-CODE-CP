#include <bits/stdc++.h>
using namespace std;
int cnr[1601][1601];
int T[1601][1601],TL[1601][1601],TR[1601][1601],SR[1601][1601],SL[1601][1601];
int DP[1601][1601];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(DP,0,sizeof(DP));
    int m,n,k,st,ans = 0;
    const int md = 1000003;
    cin >> m >> n >> k;
    st = m+n;
    char x;
    for (int i = 601; i < m+601; i++)
    {
        for (int j = 601; j < n+601; j++)
        {
            cin >> x;
            if (x == '#')
            {
                T[i][j] = 1;
                DP[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < 1601; i++)
    {
        for (int j = 1; j < 1601; j++)
        {
            if (i == 1)
            {
                cnr[i][j] = j;
            }
            else
            {
                if (i > j)
                {
                    cnr[i][j] = 0;
                }
                else
                {
                    cnr[i][j] = (cnr[i][j-1]%md+cnr[i-1][j-1]%md)%md;
                }
            }
        }
    }
    for (int i = 601; i < 1601; i++)
    {
        for (int j = 601; j < 1601; j++)
        {
            if (i == 601 && j == 601)
            {
                SL[i][j] = T[i][j];
                TL[i][j] = T[i][j];
            }
            else if (i == 601)
            {
                SL[i][j] = T[i][j] + SL[i][j-1];
                TL[i][j] = T[i][j] + SL[i][j-1];
            }
            else if (j == 601)
            {
                SL[i][j] = T[i][j] + SL[i-1][j];
                TL[i][j] = T[i][j];
            }
            else
            {
                SL[i][j] = T[i][j] + SL[i][j-1] + SL[i-1][j] - SL[i-1][j-1];
                TL[i][j] = T[i][j] + TL[i-1][j-1] + SL[i][j-1] - SL[i-1][j-1];
            }
        }
    }
    for (int i = 601; i < 1601; i++)
    {
        for (int j = n+600; j >= 0; j--)
        {
            if (i == 601 && j == n+600)
            {
                SR[i][j] = T[i][j];
                TR[i][j] = T[i][j];
            }
            else if (i == 601)
            {
                SR[i][j] = T[i][j] + SR[i][j+1];
                TR[i][j] = T[i][j] + SR[i][j+1];
            }
            else if (j == n+600)
            {
                SR[i][j] = T[i][j] + SR[i-1][j];
                TR[i][j] = T[i][j];
            }
            else
            {
                SR[i][j] = T[i][j] + SR[i][j+1] + SR[i-1][j] - SR[i-1][j+1];
                TR[i][j] = T[i][j] + TR[i-1][j+1] + SR[i][j+1] - SR[i-1][j+1];
            }
        }
    }
    for (int d = 1; d <= st; d++)
    {
        for (int i = 601; i < m+601; i++)
        {
            int sum,cal;
            for (int j = 601; j < n+601; j++)
            {
                cal = 0;
                cal += TL[i][j+d]-TL[i-d-1][j-1]-SL[i][j-1]+SL[i-d-1][j-1];
                cal += TR[i][j-d] - TR[i-d][j] - SR[i][j] + SR[i-d][j];
                cal -= TL[i+d][j-1]-TL[i][j-d-1];
                cal -= TR[i+d][j+1]-TR[i][j+d+1];
                cal += SR[i+d][601]-SR[i][601];
                sum = cal - DP[i][j];
                DP[i][j] = cal;
                ans += cnr[k][sum] % md;
                ans %= md;
            }
        }
    }
    cout << ans % md;
    return 0;
}