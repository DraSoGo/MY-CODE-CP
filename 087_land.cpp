#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b,p,q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> a >> b >> p >> q;
        for (int i = p; i <= q; i++)
        {
            for (int j = p; j <= q; j++)
            {
                if (i * j >= a && i * j <= b)
                {
                    x++;
                }
                if (i * j > b)
                {
                    break;
                }
            }
        }
        cout << x << "\n";
    }
}