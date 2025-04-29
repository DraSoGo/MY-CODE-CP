#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long x,n,sum = 0,mx = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = max(sum + x,x);
        mx = max(mx,sum);
    }
    cout << mx;
    return 0;
}