#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b[480],t = 0;
    cin >> a;
    for (int i = 0; i < 480; i++)
    {
        b[i] = 0;
    }
    
    for (int i = 0; i < a; i++)
    {
        int s,e;
        cin >> s >> e;
        while (s <= e)
        {
            b[s] = 1;
            s++;
        }
    }
    for (int i = 0; i < 480; i++)
    {
        if (b[i] == 0)
        {
            t++;
        }
    }
    cout << t;
}