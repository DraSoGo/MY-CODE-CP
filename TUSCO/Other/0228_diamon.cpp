#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    int b = (2 * a) + 1;
    int d = a, e = a, f = 1;
    const int c = a;
    for (int i = 0; i < b; i++)
    {
        if (e < (2 * c) + 1)
        {
            for (int j = 0; j < d; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < f; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < d; j++)
            {
                cout << " ";
            }
            f = f + 2;
            e++;
            d--;
            cout << "\n";
        }
    }
    int x = 1, y = a, z = (2 * a + 1);
    for (int i = 0; i < b; i++)
    {
        if (y < (2 * c))
        {
            z = z - 2;
            for (int j = 0; j < x; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < z; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < x; j++)
            {
                cout << " ";
            }
            y++;
            x++;
            cout << "\n";
        }
    }
}