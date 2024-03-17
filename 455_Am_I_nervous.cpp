#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b = 0,s = 0;
    string a;
    getline(cin,a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            s++;
        }
    }
    if (s >= b)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = char(a[i]-'A'+'a');
            }
        }
        
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = char(a[i]-'a'+'A');
            }
        }
        
    }
    cout << a;
}