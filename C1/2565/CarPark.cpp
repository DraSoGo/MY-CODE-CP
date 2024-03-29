#include <bits/stdc++.h>
using namespace std;
main()
{
    int h1,m1,h2,m2,t,m;
    cin >> h1 >> m1 >> h2 >> m2;
    t = (h2 - h1) * 60;
    if (m2 > m1)
    {
        t = t + (m2 - m1);
    }
    else if (m2 < m1)
    {
        t = t - (m1 - m2);
    }
    if (t <= 15)
    {
        m = 0;
    }
    else if (t <= 180)
    {
        m = ceil(t/60.0) * 10;
    }
    else if (t <= 360)
    {
        m = ceil((t - 180)/60.0) * 20 + 30;
    }
    else
    {
        m = 200;
    }
    cout << m;
}