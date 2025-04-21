#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a, b, n;
    cin >> a >> b >> n;
    long long c = __gcd(a, b);
    vector<long long> V;

    for (long long i = 1; i * i <= c; i++)
    {
        if (c % i == 0)
        {
            V.push_back(i);
            if (i != c / i)
                V.push_back(c / i);
        }
    }

    sort(V.begin(), V.end(), greater<>());

    while (n--)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = -1;
        for (auto x : V)
        {
            if (x >= l && x <= r)
            {
                ans = x;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
