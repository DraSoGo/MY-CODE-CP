#include <bits/stdc++.h>
using namespace std;
main()
{
    int h,m,t;
    cin >> h >> m;
    t = h*60+m;
    t -= 45;
    if (t < 0)
    {
        cout << "23 " << 60+t;
    }
    else
    {
        cout << t/60 << " " << t % 60;
    }
    
}