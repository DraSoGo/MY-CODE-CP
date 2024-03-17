#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    float x = 0,ch;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            x++;
        }
    }
    ch = (x*100)/a.length();
    if (ch < 20)
    {
        cout << "Aldebaran";
    }
    else if (ch >= 20 && ch < 40)
    {
        cout << "Norma";
    }
    else if (ch >= 40 && ch < 60)
    {
        cout << "Aquarius";
    }
    else if (ch >= 60 && ch <= 100)
    {
        cout << "Vela";
    }
    return 0;
}