#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,x,y,w,mxx,mxy,mxw = -1,mnx,mny,mnw = 999999,s;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> x >> y >> w;
        if (w > mxw)
        {
            mxx = x;
            mxy = y;
            mxw = w;
        }
        if (w < mnw)
        {
            mnx = x;
            mny = y;
            mnw = w;
        } 
    }
    cout << fixed << setprecision(6) << sqrt(pow(mxx - mnx,2) + pow(mxy - mny,2));
}