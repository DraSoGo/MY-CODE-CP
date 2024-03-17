#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int a,b,c,i = 0,d = 0;
    cin >> a;
    while (a != 0)
    {
        b = a % 10;
        c = b * pow(2,i);
        i++;
        a = a/10;
        d = d+c;
    }
    cout << d;
    //int a,b,c,i = 0,d = 0;
    // cin >> a;
    // while (a != 0)
    // {
    //     b = a % 2;
    //     c = b * (pow(2,i));
    //     d = d + c;
    //     a = a / 10;
    //     i++;
    // }
    // cout << d;

}