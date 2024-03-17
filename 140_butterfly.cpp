#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = -a + 1; i < a; i++)
    {
        for (int j = -a + 1 ; j < a; j++)
        {
            if (abs(i) <= abs(j))
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