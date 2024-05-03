#include <bits/stdc++.h>
using namespace std;

const long long sz = 5e5+2;
long long A[sz],fac[sz];

main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x,md = 1e9+7,ans = 1;
    cin >> n;
    fac[0] = 1;
    fac[1] = 1;
    memset(A,0,sizeof(A));
    for (int i = 2; i < sz; i++)
    {
        fac[i] = (fac[i-1]*i)%md;
    }
    for (int i = 0; i < 2*n-1; i++)
    {
        cin >> x;
        A[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        ans*=fac[A[i]-1];
        ans %= md;
    }
    cout << ans%md;
    return 0;
}