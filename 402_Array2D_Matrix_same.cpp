#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x, m, o, p, ch = 0;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> o >> p;
    int B[o][p];
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
            if (B[i][j] != A[i][j])
            {
                ch = 1;
            }
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
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
    if (ch == 0)
    {
        cout << "A==B";
    }
    else
    {
        cout << "A!=B";
    }
}