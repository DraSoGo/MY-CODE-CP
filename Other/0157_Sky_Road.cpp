#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    int mx = a,mn = a;
    while (a != 0)
    {
        if (a > mx )
        {
            mx = a;
        }
        if (a < mn )
        {
            mn = a;
        }
        cin >> a;
    }
    cout << abs(mx - mn);
}