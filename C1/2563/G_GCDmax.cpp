#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,m = 1,c,gcd;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            gcd = __gcd(A[i],A[j]);
            m = max(gcd,m);
        }
    }
    cout << m;
}
