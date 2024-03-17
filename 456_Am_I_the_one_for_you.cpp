#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, x;
    string a, b = "LuvYou";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        x = 0;
        int ch = 1, c;
        while (a[0] != b[x])
        {
            x++;
            if (x > 10)
            {
                break;
            }
        }
        if (b[x] == 'u')
        {
            c = 1;
        }
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[x])
            {
                ch = 0;
                break;
            }
            x++;
            if (x >= 6)
            {
                x -= 6;
            }
        }
        if (c == 1 && ch == 0)
        {
            x = 5;
            ch = 1;
            for (int i = 0; i < a.length(); i++)
            {
                if (a[i] != b[x])
                {
                    ch = 0;
                    break;
                }
                x++;
                if (x >= 6)
                {
                    x -= 6;
                }
            }
        }
        if (ch == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
}