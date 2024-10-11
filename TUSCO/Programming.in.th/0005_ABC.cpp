#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    bool ch = true;
    cin >> a >> b >> c;
    int mx = max(a,max(b,c)),mn = min(a,min(b,c)),me;
    if (a != mx && a != mn )
    {
        me = a;
    }
    else if (b != mx && b != mn )
    {
        me = b;
    }
    else if (c != mx && c != mn )
    {
        me = c;
    }
    else
    {
        ch = false;
    }
    string ABC;
    cin >> ABC;
    if (ch == false)
    {
        cout << a << " " << b << " " << c;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (ABC[i] == 'A')
            {
                cout << mn;
            }
            else if (ABC[i] == 'B')
            {
                cout << me;
            }
            else if (ABC[i] == 'C')
            {
                cout << mx;
            }
            cout << " ";
        }
    }
}