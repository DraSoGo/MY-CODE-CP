#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,ch = 0;
    cin >> a;
    while (a > 0)
    {
        if (ch == 0)
        {
            a -= 20;
            c++;
            if ( a < 20)
            {
                ch = 1;
                if (a % 6 != 0 && a % 9 != 0)
                {
                    a += 20;
                    c--;
                }
                
            }
        }
        else if (ch == 1)
        {
            a -= 9;
            c++;
            if (a < 9)
            {
                ch = 2;
                if (a % 6 != 0 && a % 9 != 0)
                {
                    a += 9;
                    c--;
                }
                
            }
        }
        else if (ch == 2)
        {
            if (a % 9 == 0)
            {
                a -= 9;
            }
            else
            {
                a -= 6;
            }
            c++;
        }
    }
    if (a == 0)
    {
        cout << c;
    }
    else
    {
        cout << "Impossible";
    }
}