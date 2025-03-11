#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    cin >> a;
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
    {
        cout << a << " leapyear";
    }
    else
    {
        cout << a << "Not leapyear";

    }
}