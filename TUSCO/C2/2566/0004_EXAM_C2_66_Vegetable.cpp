#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,x = 0,sum = 0,ans = 0;
    cin >> a >> b;
    for (double i = 1; i <= a; i++)
    {
        sum += i;
    }
    for (double i = 0; x <= b; i++)
    {
        x += (a*(a*i)) + sum;
        ans = i;
    }
    cout << ans+1;
}