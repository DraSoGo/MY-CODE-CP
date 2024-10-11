#include <bits/stdc++.h>
using namespace std;
main()
{
    int x,y,a;
    cin >> y >> x;
    char B[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> B[i][j];
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        for (int j = 0; j < y; j++)
        {
            if (a == 0 || B[0][i] == 'O')
            {
                break;
            }
            if (B[j][i] == 'O')
            {
                B[j - 1][i] = '#';
                j = 0;
                a--;
            }
            else if (B[j][i] == '#')
            {
                B[j - 1][i] = '#';
                j = 0;
                a--;
            }
            else if (j == y - 1)
            {
                B[j][i] = '#';
                j = 0;
                a--;
            }
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << B[i][j];
        }
        cout << "\n";
    }
        
}