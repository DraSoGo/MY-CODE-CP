#include <bits/stdc++.h>
using namespace std;


struct DG
{
    long long v,w;
};

const int sz = 1e3+1;
long long DP[sz][sz];
DG I[sz];

int main()
{
    ios::sync_with_stdio(0);
    long long n,w;
    cin >> n >> w;
    for (long long i = 1; i <= n; i++)
    {
        cin >> I[i].v >> I[i].w;
    }
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 0; j <= w; j++)
        {
            if (j - I[i].w < 1)
            {
                DP[i][j] = DP[i-1][j];
            }
            else
            {
                DP[i][j] = max(DP[i-1][j],DP[i-1][j-I[i].w] + I[i].v);
            }
        }
    }
    cout << DP[n][w];
    return 0;
}