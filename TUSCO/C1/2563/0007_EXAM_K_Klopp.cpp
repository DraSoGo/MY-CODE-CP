#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,mx = 0,co = 1;
    cin >> a;
    while (a != 1)
    {
        mx = max(mx,a);
        co++;
        if (a % 2 == 0)
        {
            a = floor(sqrt(a));
        }
        else
        {
            a = floor(a * sqrt(a));
        }
    }
    cout << mx << " " << co;
    return 0;
}