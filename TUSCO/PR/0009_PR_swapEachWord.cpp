#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int l = a.length(),ch = 0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == ' ' || i == l-1)
        {
            for (int j = i; j >= ch; j--)
            {
                if (a[j] != ' ')
                {
                    cout << a[j];            
                }
                
            }
            ch = i;
            cout << " ";
        }
    }
    
}