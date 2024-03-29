#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
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
    cout << "A = ";
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\nB = ";
    for (int i = 0; i < b; i++)
    {
        cout << B[i] << " ";
    }
    
}