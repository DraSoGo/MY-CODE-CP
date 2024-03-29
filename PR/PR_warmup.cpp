#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        b = b + (2 * i);
    }
    cout << b;
}