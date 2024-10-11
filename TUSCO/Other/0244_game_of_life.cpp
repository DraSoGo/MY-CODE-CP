#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    int n,a;
    cin >> n >> a;
    int A[n+2][n+2];
    char B[n+2][n+2];
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if (B[i][j] == '-')
            {
                B[i][j] = ' ';
            }
            
        }
    }
    system("cls");
    while (a--)
    {
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                if (B[i][j] == '.')
                {
                    A[i-1][j]++;
                    A[i][j-1]++;
                    A[i][j+1]++;
                    A[i+1][j]++;
                    A[i+1][j+1]++;
                    A[i-1][j-1]++;
                    A[i+1][j-1]++;
                    A[i-1][j+1]++;
                }
            }
        }
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                if (A[i][j] <= 1 || A[i][j] >= 4)
                {
                    B[i][j] = ' ';
                }
                else if (A[i][j] == 3)
                {
                    B[i][j] = '.';
                }
            }
        }
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                cout << B[i][j];
            }
            cout << "\n";
        }
        Sleep(1000);
        system("cls");
    }
}
/*
10 10
----.--.-.
...-.--.--
.-.-.-.-.-
..........
-.--.----.
------.-.-
.-.-.-.--.
----------
.-.-.-.--.
.--.---.-.
*/