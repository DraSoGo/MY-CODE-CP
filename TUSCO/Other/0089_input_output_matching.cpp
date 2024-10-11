#include <bits/stdc++.h>
using namespace std;
main()
{
    string a;
    int x = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            x++;
        }
        
    }
    cout << x;
}