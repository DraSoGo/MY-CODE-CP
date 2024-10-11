#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,mx = 0,ans;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        ans = (upper_bound(A,A+a,A[i]+b)-A)-i-1;
        // cout << ans << " ";
        mx = max(ans,mx);
    }
    // cout << "\n";
    cout << mx;
    return 0;
}