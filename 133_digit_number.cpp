#include <bits/stdc++.h>
using namespace std;
main()
{
    int i = 0,c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0,c6 = 0,c7 = 0,
    c8 = 0,c9 = 0,ch = 0;
    string a,ch1 = "ONE",ch2 = "TWO",ch3 = "THREE",ch4 = "FOUR",
    ch5 = "FIVE",ch6 = "SIX",ch7 = "SEVEN",ch8 = "EIGHT",ch9 = "NINE";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ch2[c2])
        {
            c2++;
            if (c2 == 2)
            {
                cout << 2;
                ch = 1;
                break;
            }
        }
        if (a[i] == ch7[c7])
        {
            c7++;
            if (c7 == 4)
            {
                cout << 7;
                ch = 1;
                break;
            }
        }
        if (a[i] == ch8[c8])
        {
            c8++;
            if (c8 == 4)
            {
                cout << 8;
                ch = 1;
                break;
            }
        }
        if (a[i] == ch9[c9])
        {
            c9++;
            if (c9 == 3)
            {
                cout << 9;
                ch = 1;
                break;
            }
        }
        
    }
    if (ch == 0)
    {
        cout << "NO";
    }
    
}