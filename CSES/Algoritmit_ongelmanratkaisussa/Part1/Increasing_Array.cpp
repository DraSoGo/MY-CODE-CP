#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,ans = 0;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        // cout << A[i] << " ";
    }
    // cout << "\n";
    for (int i = 1; i < n; i++)
    {
        if (i == n-1)
        {
            ans += A[i-1]-A[i];
            break;
        }
        if (A[i] < A[i-1])
        {
            if (A[i-1]-A[i] < A[i+1]-A[i] || A[i+1] < A[i-1])
            {
                // cout << i << " " << A[i-1]-A[i] << " " << A[i-1] << "\n";
                ans += A[i-1]-A[i];
                A[i] = A[i-1];
            }
            else
            {
                // cout << i << " " << A[i+1]-A[i] << " " << A[i+1] << "\n";
                ans += A[i+1]-A[i];
                A[i] = A[i+1];
            }
        }
        // cout << A[i] << " ";
    }
    cout << ans;
    return 0;
}