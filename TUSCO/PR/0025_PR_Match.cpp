#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int sum = 0,ch = 0;
        while (b > 0)
        {
            if (b % 10 == 0)
            {
                sum = sum + 6;
            }
            else if (b % 10 == 1)
            {
                sum = sum + 2;
            }
            else if (b % 10 == 2)
            {
                sum = sum + 5;
            }
            else if (b % 10 == 3)
            {
                sum = sum + 5;
            }
            else if (b % 10 == 4)
            {
                sum = sum + 4;
            }
            else if (b % 10 == 5)
            {
                sum = sum + 5;
            }
            else if (b % 10 == 6)
            {
                sum = sum + 6;
            }
            else if (b % 10 == 7)
            {
                sum = sum + 3;
            }
            else if (b % 10 == 8)
            {
                sum = sum + 7;
            }
            else if (b % 10 == 9)
            {
                sum = sum + 6;
            }
            b = b/10;
            ch = 1;
        }
        if (ch == 0)
        {
            sum = sum + 6;
        }
        c = sum/2;
        // cout << sum << " " << c << "\n";
        if (sum % 2 == 1)
        {
            cout << 7;
            c--;
        }
        for (int i = 0; i < c; i++)
        {
            cout << 1;
        }
        cout << "\n";
    }
    
}