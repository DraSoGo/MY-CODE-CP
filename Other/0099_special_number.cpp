#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char SN[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        int sn = 0,x = n,y = 0,z = n;
        while (x > 0)
        {
            x = x/10;
            y++;
        }
        while(n > 0)
        {
            sn = sn + pow(n % 10,y);
            y--;
            n = n/10;
        }
        if (z == sn)
        {
            SN[i] = 'Y';
        }
        else
        {
            SN[i] = 'N';
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout << SN[i];
    }
    
}