#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,sum = 0;
    cin >> a >> b;
    int A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = 0;
        cin >> B[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (B[b - 1] != 0)
        {
            A[b - 1] = 1;
            
        }
        else
        {
            A[b - 1] = 1;
            break;
        }
        b = B[b - 1];
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + A[i];
    }
    cout << sum;
}