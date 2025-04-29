#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
long long DP[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    long long C[n];
    DP[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j >= C[i])
            {
                DP[j] += DP[j-C[i]];
                DP[j] %= int(1e9+7);
            }
        }
    }
    // for (int i = 0; i < k; i++)
    // {
    //     cout << DP[i] << " ";
    // }
    // cout << "\n";
    cout << DP[k];
    return 0;
}