#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    int A[a];
    for(int i = 0;i < a;i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        for(int j = 0;j < A[i];j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}