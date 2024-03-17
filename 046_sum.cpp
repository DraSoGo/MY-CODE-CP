#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        b = i+b;
    }
    cout << b;
}