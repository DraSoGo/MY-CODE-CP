#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,x,y,n = 0;
    cin >> a >> x >> y;;
    for (int i = 0; i < a; i++)
    {
        int xp,yp;
        cin >> xp >> yp;
        if (sqrt(pow(xp-x,2)+pow(yp-y,2)) <= 500)
        {
            n++;
        }
    }
    cout << n;
}