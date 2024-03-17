#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c,d;
    int mx = INT_MIN,mn = INT_MAX;
    cin  >> a;
    for (int i = 0; i < a; i++)
    {
        int mxm = INT_MIN,mnm = INT_MAX;
        for (int j = 0; j < 5; j++)
        {
            cin >> b;
            mnm = min(mnm,b);
            mxm = max(mxm,b);
        }
        mx = max(mx,mxm-mnm);
        mn = min(mn,mxm-mnm);
    }
    cout << mx << " " << mn << " " << mx-mn;
}