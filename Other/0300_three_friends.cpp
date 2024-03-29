#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c = 0,A,B,C;
    cin >> a >> b;
    A = a;
    B = a;
    C = a;
    bool ch;
    for (int i = 0; i < (b - a) + 1; i++)
    {
        B = A;
        for (int j = 0; j < (b - a) + 1; j++)
        {
            C = B;
            for (int k = 0; k < (b - a) + 1; k++)
            {
                int x = A+B+C;
                for (int l = 2; l*l <= x; l++)
                {
                    if (x % l == 0)
                    {
                        ch = false;
                        break;
                    }
                    else
                    {
                        ch = true;
                    }
                }
                if (ch == true)
                {
                    c++;
                }
                C++;
                if (C > b)
                {
                    break;
                }
            }
            B++;
            if (B > b)
            {
                break;
            }
            
        }
        A++;
    }
    cout << c;
}