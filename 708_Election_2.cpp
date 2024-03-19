#include <bits/stdc++.h>
using namespace std;

const long long x = 1e7+1;
long long DP[x][2][2];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,md = 1e18+7;
    cin >> n;
    DP[1][0][1] = 1;
    DP[1][0][0] = 1;
    for (int i = 2; i <= n; i++)
    {
        DP[i][0][1] = DP[i-1][0][0]%md;
        DP[i][0][0] = (DP[i-1][0][0]%md + DP[i-1][0][1]%md)%md;
        DP[i][1][1] = (DP[i-1][1][0]%md + DP[i-1][1][1]%md + DP[i-1][0][1]%md)%md;
        DP[i][1][0] = (DP[i-1][1][0]%md + DP[i-1][1][1]%md)%md;
    }
    cout << (DP[n][1][1]%md + DP[n][1][0]%md)%md;
    return 0;
}