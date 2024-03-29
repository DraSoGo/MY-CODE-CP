#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j < 2*a; j++)
        {
            if (i < a + j && i > abs(a - j))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << "\n";
    }
    
}