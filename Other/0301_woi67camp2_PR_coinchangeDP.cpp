#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,n,x;
    cin >> k >> n;
    int DP[k+1],C[n];
    fill(DP,DP+k+1,INT_MAX-1);
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
        DP[C[i]] = 1;
    }
    sort(C,C+n);
    for (int i = 0; i <= k; i++)
    {
        // cout << i << "\n";
        for (int j = 0; j < n; j++)
        {
            if (i - C[j] < 0)
            {
                break;
            }
            // cout << DP[i] << "," << DP[i-C[j]] << "," << i-C[j] << " ";
            DP[i] = min(DP[i],DP[i-C[j]]+1);
        }
        // cout << "\n";
        // cout << DP[i] << "\n";
    }
    DP[k] != INT_MAX-1?cout << DP[k]:cout << -1;
    return 0;
}