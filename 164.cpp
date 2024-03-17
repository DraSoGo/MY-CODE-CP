#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,m = 0,z = 1;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = 0;
    }
    A[b - 1]++;
    for (int i = 0; i < a * a; i++)
    {
        cin >> x;
        A[x - 1]++;
    }
    for (int i = 0; i < a; i++)
    {
        if(A[i] > m)
        {   
            m = A[i];
            z = i + 1;
        }
    }
    cout << z;
    return 0;
}