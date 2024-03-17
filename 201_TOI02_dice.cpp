#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,cube[6],w,x,y,z;
    cin >> a;
    int A[a];
    for (int j = 0; j < a; j++)
    {
        string c;
        cin >> c;
        int l = c.length();
        cube[0] = 1;    
        cube[1] = 2;    
        cube[2] = 3;    
        cube[3] = 5;    
        cube[4] = 4;    
        cube[5] = 6;    
        for (int i = 0; i < l; i++)
        {
            if (c[i] == 'F')
            {
                w = cube[0];
                x = cube[1];
                y = cube[3];
                z = cube[5];
                cube[0] = y;
                cube[1] = w;
                cube[3] = z;
                cube[5] = x;
            }
            else if (c[i] == 'B')
            {               
                w = cube[0];
                x = cube[1];
                y = cube[3];
                z = cube[5];
                cube[0] = x;
                cube[1] = z;
                cube[3] = w;
                cube[5] = y;
            }
            else if (c[i] == 'L')
            {               
                w = cube[0];
                x = cube[2];
                y = cube[4];
                z = cube[5];
                cube[0] = y;
                cube[2] = w;
                cube[4] = z;
                cube[5] = x;
            }
            else if (c[i] == 'R')
            {
                w = cube[0];
                x = cube[2];
                y = cube[4];
                z = cube[5];
                cube[0] = x;
                cube[2] = z;
                cube[4] = w;
                cube[5] = y;
            }
            else if (c[i] == 'C')
            {
                w = cube[1];
                x = cube[2];
                y = cube[3];
                z = cube[4];
                cube[1] = z;
                cube[2] = w;
                cube[3] = x;
                cube[4] = y;
            }
            else if (c[i] == 'D')
            {
                w = cube[1];
                x = cube[2];
                y = cube[3];
                z = cube[4];
                cube[1] = x;
                cube[2] = y;
                cube[3] = z;
                cube[4] = w;
            }
            // for (int k = 0; k < 6; k++)
            // {
            //     cout << cube[k] << " ";
            // }
            // cout << "\n";
        }
        A[j] = cube[1];
    }
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
    
}