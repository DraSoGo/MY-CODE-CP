#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
        for (int j = 0; j < i; j++)
        {
            if (A[i] > A[j])
            {
                b++;
            }
        }

    }
    cout << b;
}