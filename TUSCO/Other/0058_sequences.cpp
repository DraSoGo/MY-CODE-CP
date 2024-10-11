#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b = 3;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        if(i == a - 1)
        {
            cout << b;
        }
        else
        {
            cout << b << ",";
            b = b + 5;
        }
    }
    
}