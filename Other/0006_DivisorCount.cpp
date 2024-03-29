#include <bits/stdc++.h>
using namespace std;
main()
{
    int l,r,k,a = 0;
    cin >> l >> r >> k;
    for ( ; l <= r; l++)
    {
        if( l % k == 0 )
        {
            a++;
        }
    }
    cout << a;
}