#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "#";
    }
    cout << "\n";
    for (int i = 0; i < a - 2; i++)
    {
        cout << "#";
        for (int j = 0; j < a - 2; j++)
        {
            cout << "_";
        }
        cout << "#" << "\n";
    }
    if (a != 1)
    {
        for (int i = 0; i < a; i++)
        {
            cout << "#";
        }
    }
}