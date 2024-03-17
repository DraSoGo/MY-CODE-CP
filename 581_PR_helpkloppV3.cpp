#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,sum = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += 2*j;
        }
    }
    cout << sum;
}