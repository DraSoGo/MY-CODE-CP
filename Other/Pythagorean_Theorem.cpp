#include <bits/stdc++.h>
using namespace std;
main()
{
    int d;
    float e,c;
    cin >> e;
    for (float a = 3; a <= e; a++)
    {
        for(float b = a ; b <= e;b++)
        {
            c = sqrt((a*a)+(b*b));
            d = int(c);
            if(c == d && a <= b && a + b > c);
            {
                cout << a << " " << b << " " << c << "\n";
            }
        }
    }
}