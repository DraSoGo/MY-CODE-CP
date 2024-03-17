#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b = 2;
    cin >> a;
    for(int i = 2;i*i <= a;i++)
    {
        if(a % i == 0)
        {
            b = 1;
            break;
        }
        b = 0;
    }
    if(a == 2 || b == 0 || a == 3)
    {
        cout << "is prime";
    }
    else
        cout << "is not prime";
}