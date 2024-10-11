#include <bits/stdc++.h>
using namespace std;
main()
{
    float A[3][3],detA;
    int a;
    cin >> a;
    float B[a];
    for (int k = 0; k < a; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                A[i][j] = 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> A[i][j];
            }
        }
        detA = abs((A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1])-(A[0][2]*A[1][1]*A[2][0])-(A[0][0]*A[1][2]*A[2][1])-(A[0][1]*A[1][0]*A[2][2]));
        B[k] = detA/2;
    }
    for (int i = 0; i < a; i++)
    {
        if (B[i] != 0)
        {
            cout << fixed << setprecision(2) << B[i] << "\n";
        }
    }