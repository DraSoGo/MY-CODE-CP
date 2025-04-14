//https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int DP[n],A[n];
    fill(DP,DP+n,INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    DP[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i-j >= 0)
            {
                DP[i] = min(DP[i],DP[i-j]+abs(A[i]-A[i-j]));
            }
        }
    }
    cout << DP[n-1];
    return 0;
}