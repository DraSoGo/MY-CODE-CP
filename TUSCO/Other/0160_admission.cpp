#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,s = 0,e = 0,b,c,d,mx = 0;
    cin >> a;
    int B[864000];
    for (int i = 0; i < 864000; i++)
    {
        B[i] = 0;
    }
    string x,y;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;
        s = 0;
        e = 0;
        b = x[7] - '0';
        c = (x[6] - '0')*10;
        s = s + b + c;
        b = x[4] - '0';
        c = (x[3] - '0')*10;
        d = b + c;
        s = s + (d*60);
        b = x[1] - '0';
        c = (x[0] - '0')*10;
        d = b + c;
        s = s + (d*60*60);

        b = y[7] - '0';
        c = (y[6] - '0')*10;
        e = e + b + c;
        b = y[4] - '0';
        c = (y[3] - '0')*10;
        d = b + c;
        e = e + (d*60);
        b = y[1] - '0';
        c = (y[0] - '0')*10;
        d = b + c;
        e = e + (d*60*60);
        for (int j = s - 1; j < e; j++)
        {
            B[j]++;
        }
        // cout << s << " " << e << "\n";
    }
    for (int i = 0; i < 864000; i++)
    {
        mx = max(mx,B[i]);
    }
    cout << mx;
}