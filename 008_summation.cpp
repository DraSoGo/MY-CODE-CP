#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,a = 1,b = 1,c = 0;
    cin >> n;
    if( n < 0 && n % 2 == 0 )
    {
        b = 0;
        cout << "wrong";
    }
    if (b = 1)
    {
         for( int i = 1;i <= (n+1)/2;i++)
        {
            c = a + c;
            a = a + 2;
        }
        cout << c;
    }
    
}