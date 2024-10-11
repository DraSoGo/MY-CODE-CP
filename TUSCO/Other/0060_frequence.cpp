
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long f[10],a,b;
    cin >> a;
    for (int i = 0; i < 10; i++)
    {
        f[i] = 0;
    }
    while (a > 0)
    {
        b = a % 10;
        f[b] = f[b] + 1;
        a = a / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Frequence of " << i << " = " << f[i] << "\n";
    }
}