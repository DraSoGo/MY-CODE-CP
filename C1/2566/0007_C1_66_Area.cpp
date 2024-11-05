#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x1,y1,x2,y2,xs1,xs2,ys1,ys2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        if (i == 0)
        {
            xs1 = x1;
            xs2 = x2;
            ys1 = y1;
            ys2 = y2;
            continue;
        }
        if (x1 <= xs1 && xs1 <= x2 && x2 <= xs2)
        {
            xs1 = xs1;
            xs2 = x2;
        }
        else if (xs1 <= x1 && x1 <= xs2 && xs2 <= x2)
        {
            xs2 = xs2;
            xs1 = x1;
        }
        else if (x1 <= xs1 && xs1 <= xs2 && xs2 <= x2)
        {
            xs1 = xs1;
            xs2 = xs2;
        }
        else if (xs1 <= x1 && x1 <= x2 && x2 <= xs2)
        {
            xs1 = x1;
            xs2 = x2;
        }
        else
        {
            cout << 0;
            return 0;
        }
        if (y1 <= ys1 && ys1 <= y2 && y2 <= ys2)
        {
            ys1 = ys1;
            ys2 = y2;
        }
        else if (ys1 <= y1 && y1 <= ys2 && ys2 <= y2)
        {
            ys2 = ys2;
            ys1 = y1;
        }
        else if (y1 <= ys1 && ys1 <= ys2 && ys2 <= y2)
        {
            ys1 = ys1;
            ys2 = ys2;
        }
        else if (ys1 <= y1 && y1 <= y2 && y2 <= ys2)
        {
            ys1 = y1;
            ys2 = y2;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    // cout << xs1 << " " << ys1 << " " << xs2 << " " << ys2 << "\n";
    cout << abs(xs1-xs2)*abs(ys1-ys2);
    return 0;
}