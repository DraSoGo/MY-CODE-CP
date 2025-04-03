#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long ans = 1,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ans *= 2;
        ans = ans % 1000000007LL;
    }
    cout << ans;
    return 0;
}