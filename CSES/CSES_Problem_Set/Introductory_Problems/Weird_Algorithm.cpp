#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int a;
    cin >> a;
    cout << a << " ";
    while (a != 1)
    {
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            a = (a * 3) + 1;
        }
        cout << a << " ";
    }
    return 0;
}