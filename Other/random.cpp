#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
    a = rand() % 100;
    cin >> b;
    while(b != a)
    {
        if(b < a)
        {
            cout << "low\n";
            cin >> b;
        }
        else if(b > a)
        {
            cout << "high\n";
            cin >> b;
        }
    }
    cout << "correct";
}