#include <bits/stdc++.h>
using namespace std;

struct fish
{
    double w,x,y;
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,w,x,y;
    cin >> n >> m;
    fish mx,mn;
    mx.w = -1,mn.w = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        if (w > mx.w)
        {
            mx.w = w;
            mx.x = x;
            mx.y = y;
        }
        if (w < mn.w)
        {
            mn.w = w;
            mn.x = x;
            mn.y = y;
        }
    }
    cout << fixed << setprecision(6) << sqrt((mx.x-mn.x)*(mx.x-mn.x) + (mx.y-mn.y)*(mx.y-mn.y));
    return 0;
}
