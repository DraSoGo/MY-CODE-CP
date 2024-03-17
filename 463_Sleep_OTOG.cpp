#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,a,ch,x1 = INT_MIN,y1 = INT_MAX,x2,y2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ch = 0;
        for (int j = 0; j < a; j++)
        {
            cin >> x >> y;
            if (x > y2 && ch != 1)
            {
                ch = 2;
            }
            x2 = x;
            y2 = y;
            y1 = min(y1,y);
            x1 = max(x1,x);
            if (x1 > y1 && ch != 2)
            {
                ch = 1;
            }
        }
        if (ch == 1)
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }    
    }
}