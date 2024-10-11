#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,x,y,xc = INT_MIN,yc = INT_MAX;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        xc = max(xc,x);
        yc = min(yc,y);
    }
    if (xc > yc)
    {
        cout << -1;
    }
    else
    {
        cout << min(abs(p-xc),abs(p-yc));
    }
}