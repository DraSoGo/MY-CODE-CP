#include <bits/stdc++.h>
using namespace std;
const int N = 5e6 + 10, md = 1e9 + 7;
long long DP[N];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> DP[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i > k + 1)
        {
            DP[i] = (max(DP[i - 1]%md, (DP[i - k - 1]%md + DP[i]%md) % md));
        }
        else
        {
            DP[i] = max(DP[i],DP[i-1]);
        }
        
    }
    cout << DP[n];
    return 0;
}