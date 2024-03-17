#include <bits/stdc++.h>
using namespace std;
main()
{
    int a[2][2],b[2][2],c[2][2];
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            c[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]);
        }
    }
    // c[0][0] = (a[0][0] * b[0][0]) + (a[0][1] * b[1][0]);
    // c[0][1] = (a[0][0] * b[0][1]) + (a[0][1] * b[1][1]);
    // c[1][0] = (a[1][0] * b[0][0]) + (a[1][1] * b[1][0]);
    // c[1][1] = (a[1][0] * b[0][1]) + (a[1][1] * b[1][1]);
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}