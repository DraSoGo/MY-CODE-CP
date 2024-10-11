#include <bits/stdc++.h>
using namespace std;

long long DP[2][2][2];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,md = 1e18+7;
    int a = 0,b = 1;
    cin >> n;
    DP[a][0][1] = 1;
    DP[a][0][0] = 1;
    for (int i = 2; i <= n; i++)
    {
        DP[b][0][1] = DP[a][0][0]%md;
        DP[b][0][0] = (DP[a][0][0]%md + DP[a][0][1]%md)%md;
        DP[b][1][1] = (DP[a][1][0]%md + DP[a][1][1]%md + DP[a][0][1]%md)%md;
        DP[b][1][0] = (DP[a][1][0]%md + DP[a][1][1]%md)%md;
        swap(a,b);
    }
    cout << (DP[a][1][1]%md + DP[a][1][0]%md)%md;
    return 0;
}