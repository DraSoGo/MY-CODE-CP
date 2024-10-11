#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,mx;
    cin >> a;
    mx = a;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        mx = max(mx,a);
    }
    cout << mx;
}