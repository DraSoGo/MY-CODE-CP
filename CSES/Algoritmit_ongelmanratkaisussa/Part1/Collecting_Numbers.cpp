#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,ans = 1;
    cin >> n;
    int A[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (A[i] < A[i-1])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}