#include <bits/stdc++.h>
using namespace std;

const int x = 1e6+10;
int A[x],DP[x];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx = 0;
    cin >> n;
    memset(DP,0,sizeof(DP));
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    DP[1] = A[1];
    DP[2] = A[2];
    for (int i = 0; i <= n; i++)
    {
        DP[i+2] = max(DP[i+2],A[i+2]+DP[i]);
        DP[i+3] = max(DP[i+3],A[i+3]+DP[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx,DP[i]);
    }
    cout << mx;
    return 0;
}