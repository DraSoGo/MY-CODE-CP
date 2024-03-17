#include <bits/stdc++.h>
using namespace std;
main()
{
    long long b = 0,m,ch = 0,x,j = 2,i = 2;
    cin >> m;
    while(ch != m)
    {
        j = 2;
        while(j*j <= i)
        {
            if(i % j == 0)
            {
                b = 1;
                break;
            }
            j++;
        }
        if(b == 0)
        { 
            x = i;
            ch++;
        }
        b = 0;
        i++;
    }
    cout << x;
}