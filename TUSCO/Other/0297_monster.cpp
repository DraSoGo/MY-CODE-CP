#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A + a);
    for (int i = 0; i < a; i++)
    {
        if(A[i] <= b)
        {
            c = A[i];
        }
        else
        {
            break;
        }
       
    }
    cout << c;
}