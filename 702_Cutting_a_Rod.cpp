#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx;
    cin >> n;
    int val[n],DP[n+1];
    DP[0] = 0;
    memset(DP,0,sizeof(DP));
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 1; i <= n; i++)
    {
        mx = 0;
        for (int j = 0; j < i; j++)
        {
            mx = max(mx,val[j] + DP[i-j-1]);
        }
        DP[i] = mx;
        cout << DP[i] << " ";
    }
    return 0;
}