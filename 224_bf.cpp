#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    char ch;
    cin >> ch >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0 ; j < a; j++)
        {

            if (i >= j && i+j <= a-1 || i <= j && i+j >= a-1)
            {
                cout << ch;
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << "\n";
    }
    
}