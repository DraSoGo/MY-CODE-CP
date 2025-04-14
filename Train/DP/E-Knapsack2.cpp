//https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
using namespace std;

const int szn = 1e2+1,szv = 1e5+1;
long long DP[szn][szv];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,w,mx = 0;
    cin >> n >> w;
    pair <long long,long long> A[n];
    for (int i = 0; i < szn; i++)
    {
        for (int j = 0; j < szv; j++)
        {
            DP[i][j] = INT_MAX;
        }
    }
    
    for (long long i = 1; i < n+1; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    DP[1][A[1].second] = A[1].first;
    for (long long i = 2; i < n+1; i++)
    {
        for (long long j = 0; j < szv; j++)
        {
            if (j == A[i].second)
            {
                DP[i][j] = min(A[i].first,DP[i-1][j]);
            }
            else if (j - A[i].second >= 0)
            {
                DP[i][j] = min(DP[i-1][j-A[i].second] + A[i].first,DP[i-1][j]);
            }
            else
            {
                DP[i][j] = DP[i-1][j];
            }
        }
    }
    for (long long i = 1; i < n+1; i++)
    {
        for (long long j = 1; j < szv; j++)
        {
            if (DP[i][j] <= w)
            {
                mx = max(mx,j);
            }
        }
    }
    
    cout << mx;
    return 0;
}