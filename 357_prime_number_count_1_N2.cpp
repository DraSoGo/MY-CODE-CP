#include <bits/stdc++.h>
using namespace std;
main()
{
    int b = 0,c = 0,n,m,ch = 0;
    cin >> n;
    for(int i = 2;i <= n;i++)
    {
         for(int j = 2;j*j <= i;j++)
        {
            if(i % j == 0)
            {
                b = 1;
                break;
            }
        }
        if( b != 1 )
        {
            cout << i << " ";
            ch++;
        }
        b = 0;
    }
    cout << "\n" << ch;
}