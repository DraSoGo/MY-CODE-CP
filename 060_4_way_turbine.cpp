#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b = 2,c;
    cin >> a;
    c = (2*(a-1));
    for (int i = 1; i <= a - 1; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1;j++)
        {
            cout << i;
        }
        for (int j = 1; j <= c; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1;j++)
        {
            cout << i;
        }
        cout << "\n";
        c = c - 2;
    }
     for (int i = 1; i < a; i++)
    {
        cout << " ";
    }
    cout << a << "\n";
    for (int i = a-1; i >= 1; i--)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1;j++)
        {
            cout << i;
        }
        for (int j = 1; j <= b; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1;j++)
        {
            cout << i;
        }
        cout << "\n";
        b = b+2;
    }
}