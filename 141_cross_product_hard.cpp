#include <bits/stdc++.h>
using namespace std;
main()
{
    int A[3],B[3],C[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> B[i];
    }
    C[0] = (A[1]*B[2]) - (A[2]*B[1]);
    C[1] = (A[2]*B[0]) - (A[0]*B[2]);
    C[2] = (A[0]*B[1]) - (A[1]*B[0]);
    for (int i = 0; i < 3; i++)
    {
        cout << C[i] << " ";
    }
    
}