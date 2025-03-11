#include <bits/stdc++.h>
using namespace std;

long long DP[1000001];
long long coin[101];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,mn = INT_MAX;
    cin >> n >> m;
    for (long long i = 0; i < n; i++)
    {
        cin >> coin[i];
        mn = min(mn,coin[i]);
        DP[coin[i]] = 1;
    }
    for (long long i = mn+1; i <= m; i++)
    {
        if (DP[i])
        {
            continue;
        }
        long long mnc = INT_MAX;
        for (long long j = 0; j < n; j++)
        {
            i-coin[j] >= 0 && DP[i-coin[j]] != 0 ?mnc = min(mnc,DP[i-coin[j]]):mnc = mnc;
        }
        mnc != INT_MAX ? DP[i] = mnc+1:DP[i] = 0;
    }
    DP[m] == 0?DP[m] = -1:DP[m] = DP[m];
    cout << DP[m];
    return 0;
}