#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,m = -9999999;
    cin >> a;
    int A[a];
    for(int i = 0;i < a;i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        if(A[i] > m)
        {
            m = A[i];
        }
    }
    int ch = m;
    for (int i = 0; i < m; i++)
    {
        for(int j = 0;j < a;j++)
        {
            if (A[j] - ch >= 0)
            {
                cout << " #";
            }
            else 
            {
            cout << "  ";
            }
            cout << " ";
        }
        ch--;
        cout << "\n";
    }
    for (int i = 0; i < a; i++)
    {
        if(A[i] < 10)
        {
            cout << 0 << A[i] << " ";
        }
        else
        {
            cout << A[i] << " ";
        }
    }
    
}