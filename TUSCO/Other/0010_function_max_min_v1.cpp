#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d = 999999,e = -999999;
    cin >> a >> b >> c;
    if (d > a)
    {
        d = a;
    }
    if (d > b)
    {
        d = b;
    }
    if (d > c)
    {
        d = c;
    }
    cout << "min = " << d << "\n";
    if (e < a)
    {
        e = a;
    }
    if (e < b)
    {
        e = b;
    }
    if (e < c)
    {
        e = c;
    }
    cout << "max = " << e << "\n";
}