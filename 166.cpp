#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,k,x;
    cin >> a >> b >> c;
    int B[b][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            B[i][j] = 0;
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            B[i][x - 1] = 1;
        }
    }

    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout << B[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << 1;
}