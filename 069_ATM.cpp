#include <bits/stdc++.h>
using namespace std;
main()
{
    int b1000 = 0,b500 = 0,b100 = 0,b;
    cin >> b;
    while (b >= 100)
    {
        if(b >= 1000)
        {
            b1000++;
            b = b - 1000;
        }
        else if(b >= 500 && b < 1000)
        {
            b500++;
            b = b - 500;
        }
        else if(b >= 100 && b < 500)
        {
            b100++;
            b = b - 100;
        }
    }
    cout << "B1000 = " << b1000 << "\nB500 = " << b500 << "\nB100 = " << b100;
    
}