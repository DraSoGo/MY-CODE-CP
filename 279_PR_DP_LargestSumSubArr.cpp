#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,summax = -999999999,b;
    cin >> a;
    long long A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    B[0] = A[0];
    for (int i = i; i < a; i++)
    {
        B[i] = B[i - 1] + A[i];
    }
    for (int i = i; i < a; i++)
    {
        int sum = 0;
        sum = 
    }
    
    cout << summax;
}