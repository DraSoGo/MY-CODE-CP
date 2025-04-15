#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ch;
    cin >> n;
    int ans = n/2,l = 1,r = n,bans;
    cout << "? " << ans << "\n";
    cin >> ch;
    bans = ans;
    ans = n;
    while (l < r)
    {
        cout << "? " << ans << "\n";
        int tmp = ans;
        ans = abs(ans-bans);
        bans = tmp;
        cout << l << " " << r << " " << ans << "\n";
        cin >> ch;
        if (ch == 1)
        {
            r = ans;
            tmp = (l+r)/2;
            ans = abs(tmp-bans);
        }
        else
        {
            l = ans+1;
            tmp = (l+r)/2;
            ans = abs(tmp-bans);
        }
    }
    cout << "= " << r;
    return 0;
}