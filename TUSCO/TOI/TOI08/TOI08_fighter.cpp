#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,s;
    cin >> p;
    int e = p,o = p,ec = 0,oc = 0,che = 0,cho = 0;
    for (int i = 0; i < 2*p; i++)
    {
        cin >> s;
        if (s % 2 == 0)
        {
            ec++;
            oc = 0;
            cho = 0;
            if (ec == 3)
            {
                che = 3;
            }
            if (che != 0)
            {
                o -= 3;
            }
            else
            {
                o -= 1;
            }
            if (o <= 0)
            {
                cout << 0;
                break;
            }
            
            
        }
        else
        {
            oc++;
            ec = 0;
            che = 0;
            if (oc == 3)
            {
                cho = 3;
            }
            if (cho != 0)
            {
                e -= 3;
            }
            else
            {
                e -= 1;
            }
            if (e <= 0)
            {
                cout << 1;
                break;
            }
        }
    }
    cout << "\n" << s;
}