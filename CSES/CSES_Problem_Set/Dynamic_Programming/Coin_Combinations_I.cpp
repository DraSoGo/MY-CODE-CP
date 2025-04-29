#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
long long DP[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int C[n];
    DP[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    for (int i = 1; i < k+1; i++)
    {
        // cout << i << " ";
        for (int j = 0; j < n; j++)
        {
            if (i >= C[j])
            {
                // cout << i << " " << C[j] << " " << i-C[j] << "\n";
                DP[i] += DP[i-C[j]];
                DP[i] %= int(1e9+7);
            }
        }
        // cout << DP[i] << "\n";
    }
    cout << DP[k];
    return 0;
}