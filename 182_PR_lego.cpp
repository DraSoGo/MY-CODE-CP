#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b = 0,c,d,e = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        A[i] = c;
        b = b + c;
    }
    d = b/a;
    for (int i = 0; i < a; i++)
    {
        if (A[i] > d)
        {
            e = e + (A[i] - d);
        }
        
    }
    cout << e;
}