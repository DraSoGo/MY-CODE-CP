
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long f[10],a,b,c;
    cin >> a >> c;
    int d = a;
    for (int i = 0; i < 10; i++)
    {
        f[i] = 0;
    }
    while (d <= c)
    {
        a = d;
        while (a > 0)
        {
            b = a % 10;
            f[b] = f[b] + 1;
            a = a / 10;
        }
        d++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i << " = " << f[i] << "\n";
    }
}