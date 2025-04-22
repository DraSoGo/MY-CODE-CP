#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,c;
    cin >> n >> c;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    unsigned long long l = 1,r = LLONG_MAX,mid,k;
    while (l<r)
    {
        mid = (l+r)/2;
        k = 0;
        for (int i = 0; i < n; i++)
        {
            k += mid/A[i];
            if (k > c)
            {
                break;
            }
            
        }
        // cout << l <1< " " << r << " " << mid << " " << k << "\n";
        if (k >= c)
        {
            r = mid;
        }
        else
        {
            l = mid+1;
        }
    }
    cout << l;
    return 0;
}
