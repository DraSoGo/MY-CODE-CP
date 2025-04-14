//https://atcoder.jp/contests/dp/tasks/dp_c
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
long long DP[sz][3];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> DP[i][j];
            mx = max(DP[i][j],mx);
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            long long m = 0;
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {
                    m = max(m,DP[i-1][k]);
                }
            }
            DP[i][j] += m;
            if (i == n-1)
            {
                mx = max(DP[i][j],mx);
            }
        }
    }
    cout << mx;
    return 0;
}