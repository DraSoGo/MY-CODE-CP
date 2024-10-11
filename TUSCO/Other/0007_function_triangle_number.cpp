#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for ( int i = 1; i <= a; i++)
    {
        int b = 1;
        for (int j = 0; j < i; j++)
        {
            cout << b;
            b++;
        }
        cout << "\n";
    }
    
}