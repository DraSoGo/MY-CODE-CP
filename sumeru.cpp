#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

long long power(long long k, long long p)
{
    long long ans = 1;
    while (p)
    {
        if (p & 1)
            ans = (ans * k) % M;
        k = (k * k) % M;
        p /= 2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    long long t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;

        if (n < 2)
        {
            cout << n << "\n";
            continue;
        }

        x = n % 3;
        n /= 3;

        if (x == 0)
            cout << power(3, n) << "\n";
        else if (x == 1)
            cout << (power(3, n - 1) * 4) % M << "\n";
        else
            cout << (power(3, n) * 2) % M << "\n";
    }

    return 0;
}