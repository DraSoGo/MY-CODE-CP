#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2*a; j > (2*i)+1; j--)
        {
            cout << "*";
        }
        
        cout << "\n";
        
    }
    
}