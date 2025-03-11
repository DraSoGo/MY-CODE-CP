#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double a, b, r, s;
        cin >> a >> b >> r >> s;
        double x;
        double n = (b * s) / sqrt(r * r - s * s);
        r > s ? x = min(n,a):x = a;
        double t = (a - x) / r + sqrt(x * x + b * b) / s;
        cout << fixed << setprecision(3) << t << "\n";
    }
    return 0;
}
