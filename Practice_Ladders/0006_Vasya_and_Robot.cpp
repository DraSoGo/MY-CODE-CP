#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,cl,cr,ql,qr,x,r,ans = INT_MAX;
    cin >> n >> cl >> cr >> ql >> qr;
    long long QS[n+1];
    QS[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        QS[i] = x+QS[i-1];
    }
    for (int l = 0; l <= n; l++)
    {
        long long c = 0;
        r = n-l;
        c += (QS[l]*cl) + ((QS[n]-QS[l])*cr);
        l > r?c+=(l-r-1)*ql:r > l?c+=(r-l-1)*qr:c = c;
        // cout << c << "\n";
        ans = min(ans,c);
    }
    cout << ans;
    return 0;
}