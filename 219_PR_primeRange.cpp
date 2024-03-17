#include <bits/stdc++.h>
using namespace std;
main()
{
    int b = 0,n,m,p = 0;
    cin >> n >> m;
    if( n <= 1 )
    {
        n = 2;
    }
    for(int i = n;i <= m;i++)
    {
        for(int j = 2;j*j <= i;j++)
        {
            if(i % j == 0)
            {
                b = 1;
                break;
            }
        }
        if(b == 0)
        { 
            p++;
        }
        b = 0;
    }
    cout << p;
}