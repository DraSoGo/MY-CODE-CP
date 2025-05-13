#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

struct Fenwick
{
    int n;
    vector<long long> f;
    Fenwick(int _n) : n(_n), f(n + 1, 0) {}
    void update(int i, long long v)
    {
        for (; i <= n; i += i & -i)
        {
            f[i] = (f[i] + v) % MOD;
        }
    }
    long long query(int i) const
    {
        long long s = 0;
        for (; i > 0; i -= i & -i)
        {
            s = (s + f[i]) % MOD;
        }
        return s;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> xs = a;
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());
    int M = xs.size();

    Fenwick bit(M);

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = int(lower_bound(xs.begin(), xs.end(), a[i]) - xs.begin()) + 1;
        long long s = bit.query(x - 1);
        long long dpi = (s + 1) % MOD;
        bit.update(x, dpi);
        ans = (ans + dpi) % MOD;
    }

    cout << ans << "\n";
    return 0;
}
