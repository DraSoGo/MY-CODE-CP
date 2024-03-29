#include <bits/stdc++.h>
#define forr(i, a, n) for (int i = a; i < n; i++)
#define forl(i, a, n) for (int i = a; i > n; i--)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long m, n, ans = 0;
    cin >> m >> n;
    long long T[m][n], DPR[m][n], DPL[m][n];
    memset(DPR, -1, sizeof(DPR));
    memset(DPL, -1, sizeof(DPL));
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> T[i][j];
            if (i == 0 && j == 0)
            {
                DPL[i][j] = T[i][j];
            }
            if (i == 0 && j == n - 1)
            {
                DPR[i][j] = T[i][j];
            }
        }
    }
    for (long long i = 1; i < m; i++)
    {
        for (long long j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                DPL[i][j] = T[i][j] + max(DPL[i - 1][j], DPL[i - 1][j + 1]);
            }
            else
            {
                DPL[i][j] = T[i][j] + max(DPL[i - 1][j], max(DPL[i - 1][j - 1], DPL[i - 1][j + 1]));
            }
        }
    }
    for (long long i = 1; i < m; i++)
    {
        for (long long j = n - 1; j >= n - i - 1; j--)
        {
            if (j == n - 1)
            {
                DPR[i][j] = T[i][j] + max(DPR[i - 1][j], DPR[i - 1][j - 1]);
            }
            else
            {
                DPR[i][j] = T[i][j] + max(DPR[i - 1][j], max(DPR[i - 1][j - 1], DPR[i - 1][j + 1]));
            }
        }
    }
    long long mx1 = -1, mx2 = -1;
    forr(i, 1, m + 1)
    {
        if (DPL[n][i] == -1)
            continue;
        mx1 = max(mx1, DPL[n][i]);
        DPL[n][i] = mx1;
    }
    forl(i, m, 0)
    {
        if (DPR[n][i] == -1)
            continue;
        mx2 = max(mx2, DPR[n][i]);
        DPR[n][i] = mx2;
    }

    mx1 = -1;
    forr(i, 1, m)
    {
        if (DPL[n][i] == -1 || DPR[n][i + 1] == -1)
            continue;
        mx1 = max(mx1, DPL[n][i] + DPR[n][i + 1]);
    }

    cout << mx1;
    // for (long long i = 0; i < m; i++)
    // {
    //     for (long long j = 0; j < n; j++)
    //     {
    //         cout << DPL[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    // for (long long i = 0; i < m; i++)
    // {
    //     for (long long j = 0; j < n; j++)
    //     {
    //         cout << DPR[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
