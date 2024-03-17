#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
    cin >> a >> b;
    int A[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << A[j][i] << " ";
        }
        cout << "\n";
    }
}