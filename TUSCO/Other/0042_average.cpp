#include <bits/stdc++.h>
using namespace std;
main()
{
    float a,b,d,e,c = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        c = b + c;
    }
    cout << fixed << setprecision(2) << c/a;
}