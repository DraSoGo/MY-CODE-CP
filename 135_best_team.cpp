#include <bits/stdc++.h>
using namespace std;
main()
{
    int q,r,n;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a = 1,b = 1;
        cin >> n >> r;
        for (int i = (n - r) + 1; i <= n; i++)
        {
            a = a * i;
        }
        for (int i = 1; i <= r; i++)
        {
            b = b * i;
        }
        a = a/b;
        cout << a << "\n";
    }
    
}