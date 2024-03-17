#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,d,mxd = -1,mnd = 10000;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        int mx = -1,mn = 10000,b;
        for (int j = 0; j < 5; j++)
        {
            cin >> b;
            mx = max(mx,b);            
            mn = min(mn,b);            
        }
        d = mx - mn;
        mxd = max(mxd,d);
        mnd = min(mnd,d);
    }
    cout << mxd << " " << mnd << " " << mxd-mnd;
}
