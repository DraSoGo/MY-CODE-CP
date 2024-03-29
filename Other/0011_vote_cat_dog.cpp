#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,c = 0,d = 0;
    cin >> a;
    string b;
    if(a % 2 == 0 || a > 399)
    {
        cout << "error";
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            if(b == "cat")
            {
                c++;
            }
            if(b == "dog")
            {
                d++;
            }
        }
        if(c > d)
        {
            cout << "cat" << "\n" << c << "\n";
            cout << "dog" << "\n" << d << "\n";
        }
        else
        {
            cout << "dog" << "\n" << d << "\n";
            cout << "cat" << "\n" << c << "\n";
        }
    }
}
