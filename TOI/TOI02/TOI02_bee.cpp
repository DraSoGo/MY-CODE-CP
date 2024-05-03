#include<bits/stdc++.h>
using namespace std;
main()
{
    int a = 0;
    int A[25][3];
    A[0][0] = 1;
    A[0][1] = 0;
    A[0][2] = 1;
    for (int i = 1; i < 25; i++)
    {
        A[i][0] = A[i-1][0] + A[i-1][1] + A[i-1][2];
        A[i][1] = A[i-1][0];
        A[i][2] = 1;
    }
    
    while (a != -1)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }
        cout << A[a][0] << " " << A[a][0] + A[a][1] + A[a][2] << "\n";
    }
    
}