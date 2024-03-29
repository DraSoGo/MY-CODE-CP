#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,x,y,temp;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> x >> y;
        temp = A[x-1];
        A[x - 1] = A[y - 1];
        A[y - 1] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << " ";
    }
    
}