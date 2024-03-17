#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,st,b,c = 0;
    cin >> a >> st;
    while ( st > 0)
    {
        if (st >= 15)
        {
            st = st - 15;
            c = c + 300;
        }
        else if (st >= 5)
        {
            st = st - 5;
            c = c + 150;
        }
        else if (st >= 2)
        {
            st = st - 2;
            c = c + 80;
        }
        else if (st >= 1)
        {
            st = st - 1;
            c = c + 50;
        }
    } 
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b - c >= 0)
        {
            cout << b - c;
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
    
    return 0;
}