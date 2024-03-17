#include <bits/stdc++.h>
using namespace std;
gdc(int a,int b)
{
    if (a % b == 0)
    {
        return a;
    }
    else
    {
            return gdc(b,a%b);
    }
}
main()
{
    int x,y;
    cin >> x >> y;
    cout << gdc(x,y);
}