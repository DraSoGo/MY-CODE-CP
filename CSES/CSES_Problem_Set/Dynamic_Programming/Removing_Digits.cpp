#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
long long DP[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    fill(DP,DP+sz,INT_MAX);
    DP[n] = 0;
    for (int i = n; i >= 0; i--)
    {
        int x = i;
        while (x > 0)
        {
            int y = x%10;
            DP[i-y] = min(DP[i]+1,DP[i-y]);
            // cout << y << " ";
            x /= 10;
        }
        // cout << "\n";
    }
    cout << DP[0];
    return 0;
}