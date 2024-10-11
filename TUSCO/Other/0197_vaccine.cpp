#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,x,sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin  >> a >> b >> c;
        x = (a*b) - c;
        if (x < 0)
        {
            x = 0;
        }
        sum += x;
        cout << x << "\n";
    }
    cout << sum;
}