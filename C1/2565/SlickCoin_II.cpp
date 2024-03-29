#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a-1; i++)
    {
        if (A[i] < A[i + 1])
        {
            c = c + ( A[i+1] - A[i] );
        }
        
    }
    cout << c;
}