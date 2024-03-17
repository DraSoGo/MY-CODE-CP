#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    int A[2][a],B[2][a];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < a; j++)
        {
            B[i][j] = 0;
        }
    }
    int sum1 = 0,sum2 = 0;
    for (int i = 0; i < a; i++)
    {
        sum1 = sum1 + A[0][i];
        B[0][i] = sum1;
    }
    for (int i = a - 1; i >= 0; i--)
    {
        sum2 = sum2 + A[1][i];
        B[1][i] = sum2;
    }
    for (int i = 0; i < a; i++)
    {
        
    }
    
}