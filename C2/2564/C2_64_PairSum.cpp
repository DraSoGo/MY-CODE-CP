#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,ch,j;
    cin >> a >> b;
    int A[a],B[b];
    vector <int> C;
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
        for (int j = i+1; j < a; j++)
        {
            C.push_back(A[i]+A[j]);
        }
    }
    for (int i = 0; i < b; i++)
    {
        ch = 0;
        j = 0;
        while (j < C.size())
        {
            if (C[j] == B[i])
            {
                cout << "YES\n";
                ch = 1;
                break;
            }
            j++;
        }
        if (ch == 0)
        {
            cout << "NO\n";
        }
        
    }
    
    
}