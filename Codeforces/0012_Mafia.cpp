#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x,sum = 0,xmx = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        xmx = max(xmx,x);
        sum += x;
    }
    long long l = ceil(double(sum)/(n-1));
    cout << max(xmx,l);
    return 0;
}
