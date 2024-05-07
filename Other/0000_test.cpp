#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[n];
    // fill(A[0],A[0] + n*m,100);
    fill(B,B+n,10);
    fill_n(A[0],n*m,1);
    for (int j = 0; j < n; j++)
    {
        cout << B[j] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}