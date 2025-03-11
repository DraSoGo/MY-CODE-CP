#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,sum = 0,mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = max(x,sum+x);
        mx = max(sum,mx);
    }
    cout << mx;
    return 0;
}