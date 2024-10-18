#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,mx = -1,mn = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mx = max(mx,a);
        mn = min(mn,a);
    }
    cout << 2*mx+mn;
    return 0;
}
