#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,mx = INT_MIN;
    cin >> n;
    int DP[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (i == 0)
        {
            DP[i] = a;
        }
        else
        {
            DP[i] = max(a,a+DP[i-1]);
        }
        //cout << DP[i] << " ";
        mx = max(DP[i],mx);
    }
    //cout << "\n";
    cout << mx;
    return 0;
}