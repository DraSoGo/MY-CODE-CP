#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
long long DP[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;
    cin >> n >> k;
    long long N[n];
    fill(DP,DP+(k+1),INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
        DP[N[i]] = 1;
    }
    // DP[0] = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= N[j])
            {
                DP[i] = min(DP[i],DP[i-N[j]]+1);
            }
        }
    }
    cout << (DP[k] == INT_MAX?-1:DP[k]);
    return 0;
}