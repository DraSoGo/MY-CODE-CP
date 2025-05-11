#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    long long DP[n+1],A[n+1],mn,mx;
    fill(DP,DP+n+1,LLONG_MIN);
    DP[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        mx = LLONG_MIN,mn = LLONG_MAX;
        for (int j = i; j >= 1; j--)
        {
            mx = max(mx,A[j]);
            mn = min(mn,A[j]);
            DP[i] = max(DP[i],DP[j-1]+(mx-mn));
        }
    }
    cout << DP[n];
    return 0;
}
