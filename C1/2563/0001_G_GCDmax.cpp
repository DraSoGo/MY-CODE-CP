#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx = 1;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // cout << A[i] << " " << A[j] << "\n";
            mx = max(mx,__gcd(A[i],A[j]));
        }
    }
    cout << mx;
    return 0;
}
