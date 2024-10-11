#include <bits/stdc++.h>
using namespace std;
main()
{
    int a = 1,b,c,n;
    cin >> n;
    while (n > 0)
    {
        if (n > 0)
        {
            b = 1;
            n = n - a;
        }
        if (n > 0)
        {
            b = 2;
            c = 2*a;
            n = n - c;
        }
        a = a + 1;
    }
    if (b == 1)
    {
        cout << "Patlu";
    }
    else if (b == 2)
    {
        cout << "Motu";
    }
}