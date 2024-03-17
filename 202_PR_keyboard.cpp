#include <bits/stdc++.h>
using namespace std;
main()
{
    int ch = 0;
    string a,b;
    cin >> a;
    b = a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '[')
        {
            ch = 1;
            // cout << "1 " << a << "\n";
        }
        if (ch == 1)
        {
            if (a[i] == ']')
            {
                ch = 0;
            }
            a[i] = '*';
            
            // cout << "2 " << a << "\n";
        }
        // cout << a << "\n" << ch << "\n";
    }
    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (b[i] == '[')
        {
            for (int j = i+1; j < a.length(); j++)
            {
                if (b[j] == ']')
                {
                    break;
                }
                cout << b[j];
            }
            
        }
        
    }
    
    
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '*')
        {
            cout << a[i];
        }
        
    }
    
}