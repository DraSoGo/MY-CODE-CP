#include <bits/stdc++.h>
using namespace std;
main()
{
    char c;
    cin >> c;
    int a = int(c);
    cout << c << " is " << a << "\n";
    if(a >= 65 && a <= 90)
    {
        cout << "a capital letter";
    }
    else if(a >= 97 && a <= 122)
    {
        cout << "a small letter";
    }
    else if(a >= 48 && a <= 57)
    {
        cout << "a digit";
    }
    else
    {
        cout << "special character";
    }
}