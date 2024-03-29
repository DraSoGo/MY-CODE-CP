#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b = 0;
    cin >> a;
    int A[a];
    for(int i = 0;i < a;i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        b = b + A[i];
        if(i != a - 1)
        {
            cout << A[i] << "+";
        }
        else cout << A[i] << "=";
    }
    cout << b;
}