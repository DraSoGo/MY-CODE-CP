#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        double c;
        cin >> c;
        double x = floor(c);
        if (x == c)
        {
            cout << "OK\n";
        }
        else
            cout << "NOT INTEGER\n";
    }
    
}