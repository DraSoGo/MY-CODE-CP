#include <bits/stdc++.h>
using namespace std;
main()
{
    string x;
    cin >> x;
    int l = 1;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'A')
        {
            if (l == 1)
            {
                l = 2;
            }
            else if(l == 2)
            {
                l = 1;
            }
        }
        else if (x[i] == 'B')
        {
            if (l == 2)
            {
                l = 3;
            }
            else if(l == 3)
            {
                l = 2;
            }
        }
        else if (x[i] == 'C')
        {
            if (l == 1)
            {
                l = 3;
            }
            else if(l == 3)
            {
                l = 1;
            }
        }
    }
    cout << l;
}