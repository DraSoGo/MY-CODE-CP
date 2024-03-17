#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,m = 0,z;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = 0;
    }
    A[b - 1]++;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> x;
            if (x - 1 == i)
            {
                A[i]++;
            }
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        if (A[i] > m)
        {
            m = A[i];
            z = i + 1;
        }    
    }
    cout << z;
    return 0;
}