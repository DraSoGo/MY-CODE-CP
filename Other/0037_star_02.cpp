#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    
}