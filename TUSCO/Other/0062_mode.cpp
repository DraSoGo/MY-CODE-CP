#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,m[10000],b,c = -999999,e;
    cin >> a;
    for (int i = 0; i < 10000; i++)
    {
        m[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        m[b]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if(m[i] >= c)
        {
            c = m[i];
            e = i;
        }
    }
    cout << e;
}