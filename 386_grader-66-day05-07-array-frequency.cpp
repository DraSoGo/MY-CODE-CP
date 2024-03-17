#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ch;
    cin >> n;
    int A[2][n];
    for (int j = 0; j < n; j++)
    {
        A[0][j] = -1000;
        A[1][j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < n; j++)
        {
            if (a == A[0][j])
            {
                A[1][j]++;
                break;
            }
            else if (A[0][j] == -1000)
            {
                A[0][j] = a;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[0][i] != -1000)
        {
            cout << A[0][i] << " " << A[1][i]+1 << "\n";
        }
    }
    
}