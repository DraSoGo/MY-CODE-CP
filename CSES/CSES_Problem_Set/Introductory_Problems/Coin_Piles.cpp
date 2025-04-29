#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,a,b,mx,mn;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        mx = max(a,b);
        mn = min(a,b);
        if (mx > 2*mn || (mn+mx) % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    
    return 0;
}