#include <bits/stdc++.h>
using namespace std;
long long cal(long long n)
{
    long long x = 0;
    while (n > 0)
    {
        n -= 9;
        x++;
    }

    return x * 10;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, s, x;
    cin >> n >> s;
    s = cal(s);
    s -= (s/100)*10;
    if (n - s + 1 > 0)
    {
        cout << n - s + 1 << "\n" << n;
    }
    else
    {
        cout << 0 << "\n"<< -1;
    }

    return 0;
}