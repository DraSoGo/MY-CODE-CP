#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x, m;
    cin >> n >> m;
    int A[n][m], B[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            A[i][j] += x;
            B[i][j] -= x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
}