//147_half_triangle_01.cpp
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        for (int j = a - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}