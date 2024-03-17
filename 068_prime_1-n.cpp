#include <bits/stdc++.h>
using namespace std;
main()
{
    long long b = 0,c = 0,n,m;
    cin >> n;
    for(int i = 2;i <= n;i++)
    {
         for(int j = 2;j < i;j++)
        {
            if(i % j == 0)
            {
                b = 1;
            }
        }
        if( b != 1 )
        {
            cout << i << " ";
        }
        b = 0;
    }
}