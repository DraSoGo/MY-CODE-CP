#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y,m,mx = 0;
    cin >> x >> y >> m;
    for (int i = 0; i <= m/x; i++)
    {
        for (int j = 0; j <= m/y; j++)
        {
            i*x + j*y <= m ? mx = max(mx,i*x + j*y) : mx = mx;
        }
    }
    cout << mx << "\n";
    return 0;
}