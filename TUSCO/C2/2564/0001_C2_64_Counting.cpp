#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c,d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        long long ch = 0;
        cin >> b >> c >> d;
        for (int j = b; j <= c; j++)
        {
            int x = j;
            while (x > 0)
            {
                if (x % 10 == d)
                {
                    ch ++;
                }
                
                x = x/10;
            }
            
        }
        cout << ch << "\n";
    }
    
    
}