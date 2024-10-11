#include <bits/stdc++.h>
using namespace std;
main()
{
    int a = 0,b = 0;
    string c;
    cin >> c;
    for(int i = 0;i < c.length();i++)
    {
        if(c[i] >= 65 && c[i] <= 90)
        {
            a = 1;
        }
        else if(c[i] >= 97 && c[i] <= 122)
        {
            b = 1;
        }
    }
    if(a == 1 && b == 1)
    {
        cout << "Mix";
    }
    else if(a == 1)
    {
        cout << "All Capital Letter";
    }
    else if(b == 1)
    {
        cout << "All Small Letter";
    }
}