#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int d;
    cin >> a >> b >> c;
    if (b == "*")
    {
        cout << "1";
        for (int i = 0; i < (a.length()-1) + (c.length()-1); i++)
        {
            cout << "0";
        }
    }
    else
    {
        int y[1000],x,ch = 0;
        memset(y,0,sizeof(y));
        x = 99;
        for (int i = a.length()-1; i >= 0; i--)
        {
            y[x] += a[i]-'0';
            x--;
        }
        x = 99;
        for (int i = c.length()-1; i >= 0; i--)
        {
            y[x] += c[i]-'0';
            x--;
        }
        for (int i = 0; i < 100; i++)
        {
            if (y[i] >= 1)
            {
                ch = 1;
            }
            if (ch == 1)
            {
                cout << y[i];
            }
            
        }
    }
}