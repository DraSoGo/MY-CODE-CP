#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char x = 'a';
    int c = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = 'A';
        }
        else
        {
            a[i] = 'a';
        }
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != x && a[i] == a[i+1])
        {
            if (x == 'a')
            {
                x = 'A';
            }
            else
            {
                x = 'a';
            }
            c += 1;
        }
        else if (a[i] != x && a[i] != a[i+1])
        {
            c += 1;
        }
    }
    cout << c;
}