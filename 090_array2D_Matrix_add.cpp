#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int A[a][b],B[a][b],C[a][b];
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
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    
}