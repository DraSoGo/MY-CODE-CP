#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,x = 0,j,y,ch;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        x = 0;
        ch = 0;
        j = 1;
        cin >> b;
        while (x <= b)
        {
            y = 3 * j;
            x = x + y;
            j++;
            // cout << "y = " << y << "\n";
            // cout << "x = " << x << "\n";
        }
        x = x - y;
        b = b - x;
        y = y/3;
        // cout << x << " " << b << " " << y << "\n";
        if (b == 0)
        {
            cout << "splash";
        }
        else if (b <= y * 1)
        {
            cout << y << " dolphin";
            if (y > 1)
            {
                cout << "s";
            }
        }
        else if (b <= y * 2)
        {
            cout << y << " jump";
            if (y > 1)
            {
                cout << "s";
            }
        }
        else if (b <= y * 3)
        {
            cout << "splash";
        }
        cout << "\n";
    }
        
}