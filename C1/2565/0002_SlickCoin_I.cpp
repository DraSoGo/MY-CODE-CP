#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mn = INT_MAX,a,mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mx = max(mx,a-mn);
        mn = min(a,mn);
    }
    cout << mx;
    return 0;
}