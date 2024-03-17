#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,sum = 0;
    cin >> a;
    for (int i = 0; i <= 2*a; i+=2)
    {
        sum += i;
    }
    cout << sum;
}