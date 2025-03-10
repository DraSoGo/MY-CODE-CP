#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sum = 0,ans = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        ans += 2*sum;
    }
    cout << ans;
    return 0;
}