#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    long long b = 9999999999,c = -9999999999;
    cin >> a;
    int A[a];
    for(int i = 0;i < a;i++)
    {
        cin >> A[i];
    }
    for(int i = 0;i < a;i++)
    {
        if(A[i] > c)
        {
            c = A[i];
        }
        if(A[i] < b)
        {
            b = A[i];
        }
    }
    cout << c << "\n" << b;
}