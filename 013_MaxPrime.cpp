#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c = -999999;
    cin >> a;
    while (a != 0)
    {
        if(a > 1)
        {
            b = 1;
            for (int i = 2; i < a; i++)
            {   
                if(a % i == 0 )
                {
                    b = 0;
                }
            }
            {
                b == 0;
            }
            if(b == 1)
            {
                if(a > c)
                {
                    c = a;
                }
            }
        }
        cin >> a;
    }
    if(c > 0)
    {
        cout << c;
    }
    else
    {
        cout << 0;
    }
    
}