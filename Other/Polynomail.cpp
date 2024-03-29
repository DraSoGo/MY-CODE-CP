#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b,c,x1,x2,k,l,r,mid,co;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c >> k;
        l = 0;r = 1e7;
        while (l <= r)
        {
            mid = (l+r)/2;
            if (mid*mid*a+mid*b+c >= k)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout << l << "\n";
    }
    return 0;
}