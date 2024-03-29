#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,mx = 0,ch;
    cin >> x;
    while (x != 0)
    {
        ch = 0;
        for (int i = 2; i*i <= x; i++)
        {
            if (x % i == 0)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 0)
        {
            mx = max(mx,x);
        }
        cin >> x;
    }
    cout << mx;
}