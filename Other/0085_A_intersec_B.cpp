#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,x = 0;
    cin >> a >> b;
    int A[a],B[b];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (A[i] == B[j])
            {
                x++;
            }
        }
    }
    cout << x;
}