#include <bits/stdc++.h>
using namespace std;
main()
{
    char A[4][3],x,y;
    string a;
    A[0][0] = '1';
    A[0][1] = '2';
    A[0][2] = '3';
    A[1][0] = '4';
    A[1][1] = '5';
    A[1][2] = '6';
    A[2][0] = '7';
    A[2][1] = '8';
    A[2][2] = '9';
    A[3][0] = '*';
    A[3][1] = '0';
    A[3][2] = '#';
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1')
        {
            x = 0;
            y = 0;
        }
        else if (a[i] == '2')
        {
            x = 0;
            y = 1;
        }
        else if (a[i] == '3')
        {
            x = 0;
            y = 2;
        }
        else if (a[i] == '4')
        {
            x = 1;
            y = 0;
        }
        else if (a[i] == '5')
        {
            x = 1;
            y = 1;
        }
        else if (a[i] == '6')
        {
            x = 1;
            y = 2;
        }
        else if (a[i] == '7')
        {
            x = 2;
            y = 0;
        }
        else if (a[i] == '8')
        {
            x = 2;
            y = 1;
        }
        else if (a[i] == '9')
        {
            x = 2;
            y = 2;
        }
        else if (a[i] == '*')
        {
            x = 3;
            y = 0;
        }
        else if (a[i] == '0')
        {
            x = 3;
            y = 1;
        }
        else if (a[i] == '#')
        {
            x = 3;
            y = 2;
        }
        else if (a[i] == 'q')
        {
            x--;
            y--;
        }
        else if (a[i] == 'w')
        {
            x --;
        }
        else if (a[i] == 'e')
        {
            x--;
            y++;
        }
        else if (a[i] == 'a')
        {
            y--;
        }
        else if (a[i] == 'd')
        {
            y++;
        }
        else if (a[i] == 'z')
        {
            x++;
            y--;
        }
        else if (a[i] == 'x')
        {
            x++;
        }
        else if (a[i] == 'c')
        {
            x++;
            y++;
        }
        cout << A[x][y];
    }
}