//ห.ร.ม
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c[10000],d = -9999999,e = 0,f;
    cin >> a >> b;
    for (int i = 0; i < 10000; i++)
    {
        c[i] = 0;
    }
    f = max(a,b);
    for (int i = 1; i <= f; i++)
    {
        if( a % i == 0 && b % i == 0)
        {
            c[e] = i;
            e++;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        if(c[i] > d)
        {
            d = c[i];
        }
    }
    if(a == 0 || b == 0)
    {
        cout << 0;
    }
    else
    {
        cout << d;
    }
}