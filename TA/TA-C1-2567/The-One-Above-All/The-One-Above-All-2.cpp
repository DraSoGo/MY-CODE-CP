#include <bits/stdc++.h>
using namespace std;

const long long md = 1e9 + 7;

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k, ans = 1, m;
    long long sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (isPrime(m))
        {
            sum = (sum % md + m % md) % md;
        }
    }
    for (int i = 0; i < sum; i++)
    {
        ans = ((ans % md) * (k % md)) % md;
    }
    cout << ans;
    return 0;
}