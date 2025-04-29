#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x,co = 0,l = 0;
    cin >> n >> x;
    long long A[n],B[n],r = n-1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    while (l <= r)
    {
        if (A[l] + A[r] <= x)
        {
            l++,r--;
            co++;
        }
        else
        {
            r--;
            co++;
        }
    }
    cout << co;
    return 0;
}