#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx,c;
    cin >> n;
    int val[n+1],DP[n+1];
    memset(DP,0,sizeof(DP));
    val[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> val[i];
    }
    cin >> c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            DP[i] = max(DP[i],val[j]+DP[i-j]);
        }
        //cout << DP[i] << " ";
    }
    cout << DP[c];
    return 0;
}