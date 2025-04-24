//https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,w;
    cin >> n >> w;
    long long DP[n+1][w+1];
    memset(DP,0,sizeof(DP));
    pair <long long,long long> A[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i].second >> A[i].first;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (j - A[i].second >= 0)
            {
                DP[i][j] = max(DP[i-1][j],DP[i-1][j-A[i].second] + A[i].first);
            }
            else
            {
                DP[i][j] = DP[i-1][j];
            }
            // cout << DP[i][j] << " ";
        }
        // cout << "\n";
    }
    cout << DP[n][w];
    return 0;
}