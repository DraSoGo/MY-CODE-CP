#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    char A[n][m],C[n][m];
    int B[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
            B[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int ch = 0;
        for (int j = 0; j < m/2; j++)
        {
            if (A[i][j] != A[i][m - j - 1])
            {
                ch = 1;
                break;
            }
        }
        if (ch == 0)
        {
            for (int j = 0; j < m; j++)
            {
                B[i][j]++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        int ch = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j][i] != A[n - j - 1][i])
            {
                ch = 1;
                break;
            }
        }
        if (ch == 0)
        {
            for (int j = 0; j < n; j++)
            {
                B[j][i] += 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (B[i][j] == 0)
            {
                C[i][j] = 'N';
            }
            else if (B[i][j] == 1)
            {
                C[i][j] = 'H';
            }
            else if (B[i][j] == 2)
            {
                C[i][j] = 'V';
            }
            else if (B[i][j] == 3)
            {
                C[i][j] = 'B';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << C[i][j];
        }
        cout << "\n";
    }
}