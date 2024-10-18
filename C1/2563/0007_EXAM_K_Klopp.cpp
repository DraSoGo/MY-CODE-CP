#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,co = 1,mx = -1;
    cin >> a;
    while (a != 1)
    {
        mx = max(a,mx);
        co++;
        if (a % 2 == 0)
        {
            a = floor(sqrt(a));
        }
        else
        {
            a = floor(a * sqrt(a));
        }
    }
    cout << mx << " " << co;
    return 0;
}
