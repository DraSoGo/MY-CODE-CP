#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int DP[n+1];
    memset(DP,0,sizeof(DP));
    DP[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i >= j)
            {
                DP[i] += DP[i-j];
                DP[i] %= int(1e9+7);
            }
        }
    }
    cout << DP[n];
    return 0;
}