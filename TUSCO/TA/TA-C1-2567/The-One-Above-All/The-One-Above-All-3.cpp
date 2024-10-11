#include <bits/stdc++.h>
using namespace std;

const long long md = 1e9 + 7,p = (1e7);
bool P[p];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    P[1] = 1;
    for (long long i = 2; i < p; i++)
    {
        if (P[i] == 0)
        {
            for (long long j = i*i; j < p; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    long long n, k, ans = 1, m;
    long long sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (P[m] == 0)
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