#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    float B[a];
    for(int i = 0;i < a;i++)
    {
        int c;
        float b = 0;
        cin >> c;
        float A[c];
        for (int j = 0; j < c; j++)
        {
            cin >> A[j];
            b = b + A[j];
        }
        B[i] = b/c;
    }
    for (int i = 0; i < a; i++)
    {
        cout << fixed << setprecision(2) << B[i] << "\n";
    }
    
}