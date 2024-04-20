#include <iostream>

using namespace std;
const int N = 5e5 + 2;
const int MOD = 1e9 + 7;

long long a[N], fac[N];

int main()
{
    int n, k;
    scanf("%d", &n);
    long long ans = 1ll;
    fac[0] = fac[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    for (int i = 0, x; i < 2 * n - 1; i++)
    {
        scanf("%d", &x), a[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        ans *= fac[a[i] - 1], ans %= MOD;
    }
    printf("%lld", ans);
}