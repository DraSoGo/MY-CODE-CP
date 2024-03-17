#include <bits/stdc++.h>
using namespace std;
main()
{
    float a;
    cin >> a;
    if(a <= 12000)
    {
        a = a*7/100;
    }
    if(a > 12000)
    {
        a = a*12/100;
    }
    cout << fixed << setprecision(2) << a;
}