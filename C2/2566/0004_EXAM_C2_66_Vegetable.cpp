#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long l,n,s,x = 0,i = 0;
    cin >> l >> n;
    s = (l*(l+1))/2;
    while (n > x)
    {
        x += (i*l*l)+s;
        i++;
    }
    cout << i;
    return 0;
}