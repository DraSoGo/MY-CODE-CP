#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,x = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int A,B;
        cin >> A >> B;
        if (A <= 400 && B >= 150 && B <= 200)
        {
            x++;
        }
    }
    cout << x;
}