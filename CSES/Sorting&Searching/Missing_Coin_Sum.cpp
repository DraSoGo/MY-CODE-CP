#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,co = 0;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        // cout << A[i] << " " << co << " " << co+1 << '\n';
        if (co+1 < A[i])
        {
            break;
        }
        else
        {
            co += A[i];
        }
    }
    cout << co+1;
    return 0;
}