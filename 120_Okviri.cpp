#include <bits/stdc++.h>
using namespace std;
main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if ((i+1) % 3 != 0)
        {
            cout << "..#.";
        }
        else
        {
            cout << "..*.";
        }
    }
    cout << ".";
    cout << "\n";
    for (int i = 0; i < a.length(); i++)
    {
        if ((i+1) % 3 != 0)
        {
            cout << ".#.#";
        }
        else
        {
            cout << ".*.*";
        }
    }
    cout << ".";
    cout << "\n";
    for (int i = 0; i < a.length(); i++)
    {
        if ((i+1) % 3 != 0)
        {
            if (i > 1)
            {
                if ((i+1) % 3 == 1)
                {
                    cout << "." << a[i] << ".";
                }
                else
                {
                    cout << "#." << a[i] << ".";
                }
            }
            else
            {
                cout << "#." << a[i] << ".";
            }
            
            if (i == a.length()-1)
            {
                cout << "#";
            }
            
        }
        else
        {
            cout << "*." << a[i] << ".*";
        }
    }
    cout << "\n";
    for (int i = 0; i < a.length(); i++)
    {
        if ((i+1) % 3 != 0)
        {
            cout << ".#.#";
        }
        else
        {
            cout << ".*.*";
        }
    }
    cout << ".";
    cout << "\n";
    for (int i = 0; i < a.length(); i++)
    {
        if ((i+1) % 3 != 0)
        {
            cout << "..#.";
        }
        else
        {
            cout << "..*.";
        }
    }
    cout << ".";
    
}