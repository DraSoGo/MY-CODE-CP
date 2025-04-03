#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
long long QSE[sz],QSO[sz],DP[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fill(DP,DP+sz,INT_MAX);
    DP[0] = 0;
    long long n,v,w,x;
    cin >> n >> v >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        QSE[i] += QSE[i-1];
        QSO[i] += QSO[i-1];
        x % 2 == 0?QSE[i] += x:QSO[i] += x;
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << QSO[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << QSE[i] << " ";
    // }
    for (int r = 2; r <= n; r+=2)
    {
        for (int l = 0; l < r; l+=2)
        {
            int m = (l+r)/2;
            if (QSO[m]-QSO[l] > v || QSE[r] - QSE[m] > w)
            {
                continue;
            }
            DP[r] = min(DP[r],DP[l]+1);
        }
    }
    cout << (DP[n] == INT_MAX? -1:DP[n]);
    return 0;
}