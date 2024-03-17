#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = a - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}