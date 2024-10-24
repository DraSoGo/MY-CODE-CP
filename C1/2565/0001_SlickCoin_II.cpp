#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b = INT_MAX,mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (b < a)
        {
            mx += a-b;
        }
        b = a;
    }
    cout << mx;
    return 0;
}