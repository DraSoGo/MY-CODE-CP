#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,ma[100],c = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int ch = 0,x = 1;
        if (b < 0)
        {
            x = -1;
        }
        b = abs(b);
        while (b > 0)
        {
            ma[ch] = b % 3;
            b = b/3;
            ch++;
        }
        for (int j = 0; j < ch; j++)
        {
            ma[ch] = 0;
            if (ma[j] == 3)
            {
                ma[j] = 0;
                ma[j+1]++;
            }
            else if (ma[j] == 2)
            {
                ma[j] = -1;
                ma[j+1]++;
            }
            if (ma[ch] != 0)
            {
                ch++;
            }
        }
        for (int j = ch - 1; j >= 0; j--)
        {
            cout << ma[j]*x << " ";
        }
        cout << "\n";
    }   
}