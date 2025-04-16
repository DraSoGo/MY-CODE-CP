#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,o;
    cin >> m >> o;
    long long A[o];
    for (int i = 0; i < o; i++)
    {
        cin >> A[i];
    }
    long long l = 0,r = INT_MAX;
    while (l < r)
    {
        long long mid = (l+r)/2,sum = 0,co = 1;
        // cout << l << " " << r << " " << mid << "\n";
        for (int i = 0; i < o; i++)
        {
            if (A[i] > mid)
            {
                co = m+1;
                break;
            }
            
            sum += A[i];
            if (sum > mid)
            {
                co++;
                sum = A[i];
            }
            // cout << A[i] << " " << co << " " << sum << "\n";
            if (co > m)
            {
                break;
            }
        }
        if (co > m)
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