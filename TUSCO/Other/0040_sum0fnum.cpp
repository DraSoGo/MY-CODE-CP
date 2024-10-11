#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int n,a,sum = 0;
    cin >> n;
    for (int i = 0; n > 0 ; i++)
    {
        a = n % 10;
        sum = a + sum;
        n = n/10;
    }
    cout << sum;
}