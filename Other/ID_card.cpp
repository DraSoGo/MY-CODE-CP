#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,sum = 0,c;
    cin >> a;
    c = a;
    for ( int i = 2; i <= 13; i++)
    {  
        b = a % 10;
        sum = sum + (b * i);
        a = a/10;
    }
    sum = sum % 11;
    sum = 11 - sum;
    sum = sum % 10;
    cout << c << sum;
}