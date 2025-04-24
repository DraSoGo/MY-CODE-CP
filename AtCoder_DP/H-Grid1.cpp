//https://atcoder.jp/contests/dp/tasks/dp_h
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    long long DP[n+1][m+1];
    char T[n+1][m+1];
    memset(DP,0,sizeof(DP));
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            cin >> T[i][j];
        }
    }
    DP[1][1] = 1;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if (T[i][j] != '#')
            {
                DP[i][j] += DP[i-1][j];
                DP[i][j] += DP[i][j-1];
                DP[i][j] %= int(1e9+7);
            }
        }
    }
    cout << DP[n][m];
    return 0;
}