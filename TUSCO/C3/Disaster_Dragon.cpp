#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
int x, a, b, q, p, d, n, ansl, ansr;
int tree[N];

int sum(int k)
{
    int s = 0;
    while (k >= 1)
    {
        s += tree[k];
        k -= k & -k;
    }
    return s;
}

void add(int k, int x)
{
    for (int i = k; i <= N; i += (i & -i))
    {
        tree[i] += x;
    }
}

int bs(int t)
{
    int l = 1, r = n + 1, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (sum(mid) < t)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie(0);
    cin >> n >> q >> a >> b;
    for (int i = 0; i < q; i++)
    {
        cin >> d >> p >> x;
        if (d == 1)
        {
            add(1, x);
            add(p + 1, -x);
        }
        else
        {
            add(p, -x);
            add(n + 1, x);
        }
        ansl = bs(b + 1);
        ansr = bs(a)-1;
        if (ansl == ansr)
        {
            cout << ansl << "\n";
        }
        else if (ansl < ansr)
        {
            cout << ansl << " " << ansr << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}