#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,p,s,k;
    char c;
    cin >> n >> m;
    long long N[n];
    for (int i = 0; i < n; i++)
    {
        N[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        if (c == 'B')
        {
            cin >> p >> s;
            N[p - 1] = s;
        }
        else if (c == 'C')
        {
            cin >> k;
            long long x = 0;
            for (int j = 0; j < k; j++)
            {
                if(N[j] > x)
                {
                    x = N[j];
                }
            }
            cout << x << "\n";
        }
    }
}