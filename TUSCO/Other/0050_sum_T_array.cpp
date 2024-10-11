#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    int B[a];
    for(int i = 0;i < a;i++)
    {
        int c,b = 0;
        cin >> c;
        int A[c];
        for (int j = 0; j < c; j++)
        {
            cin >> A[j];
            b = b + A[j];
        }
        B[i] = b;
    }
    for (int i = 0; i < a; i++)
    {
        cout << B[i] << "\n";
    }
    
}