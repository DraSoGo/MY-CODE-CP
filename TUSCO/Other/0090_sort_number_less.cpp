#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A + a);
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
}