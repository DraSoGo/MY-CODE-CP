#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;
    cin >> n >> k;
    long long A[n];
    long long l = 0,r = 0,mid,sum,co;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        l = max(l,A[i]);
        r += A[i];
    }
    while (l < r)
    {
        mid = (l+r)/2;
        sum = 0,co = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum > mid)
            {
                co++;
                sum = A[i];
            }
        }
        co++;
        // cout << l << " " << r << " " << mid << " " << sum << " " << co << "\n";
        if (co > k)
        {
            l = mid+1;
        }
        else
        {
            r = mid;
        }
    }
    cout << r;
    return 0;
}