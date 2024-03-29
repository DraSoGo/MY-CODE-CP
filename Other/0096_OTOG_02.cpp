#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,x = 0,sum = 0;
    cin >> n;
    int R[n],N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> R[i];
        N[i] = R[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        int average = floor((R[i - 1] + R[i] + R[i + 1])/3.0);
        if (average > R[i])
        {
            N[i] = average;
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + N[i];
    }
    cout << x << " " << sum;
}