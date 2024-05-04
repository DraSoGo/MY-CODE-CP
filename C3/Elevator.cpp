#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    long long n,q,sum = 0,co = 0,c;
    cin >> n >> q;
    long long A[n],l = 0,r = n-1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n,greater <int>());
    while (l < r)
    {
        // cout << l << " " << r << "\n";
        c = 0;
        sum = A[l];
        for (int i = r; i >= l+1; i--)
        {
            if (sum + A[i] < q)
            {
                sum += A[i];
                c++;
            }
            else
            {
                break;
            }
        }
        r -= c;
        l++;
        // cout << l << " " << r << "\n";
        co++;
    }
    cout << co;
    return 0;
}