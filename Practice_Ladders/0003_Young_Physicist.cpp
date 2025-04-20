#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y,z,sx = 0,sy = 0,sz = 0;
    cin >> n;
    while (n--)
    {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    cout << (sx == 0 && sy  == 0 && sz == 0?"YES":"NO");
    return 0;
}