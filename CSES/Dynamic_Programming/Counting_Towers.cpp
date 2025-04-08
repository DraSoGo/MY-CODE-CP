#include <bits/stdc++.h>
using namespace std;

const long long sz = 1e6+1,MOD = 1e9+7;
long long DP[sz][2];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n;
    DP[1][1] = DP[1][2] = 1;
    for (int i = 2; i < sz; i++)
    {
        DP[i][1] = ((DP[i-1][1]*4)%MOD + (DP[i-1][2]))%MOD;
        DP[i][2] = ((DP[i-1][1]) + (DP[i-1][2]*2)%MOD)%MOD;
    }
    
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (DP[n][1] + DP[n][2])%MOD << "\n";
    }
    return 0;
}