#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == j || i == a || i == 1 || j == a || j == 1 || i == (a-j)+1)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
            
        }
        cout << "\n";
    }
    
}