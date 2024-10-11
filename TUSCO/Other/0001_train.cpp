#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    bool ch;
    for (int j = 2; j < 1000; j++)
    {
        ch = 0;
        n = j;
        if (n % 2 == 0 && n != 2)
        {
            // cout << n << " N\n";
            continue;
        }
        for (int i = 3; i*i <= n; i+=2)
        {
            if (n % i == 0 && n != 3)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 1)
        {
            // cout << n << " N\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}