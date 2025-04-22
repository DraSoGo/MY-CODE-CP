#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,sum = 0,x,mx = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        mx = max(mx,x);
    }
    cout << max(sum,2*mx);
    return 0;
}
