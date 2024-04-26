#include <bits/stdc++.h>
using namespace std;

int A[5001],DP1[5001][5001],DP2[5001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        DP1[i][i] = A[i];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int l = 1; l+i-1 <= n; l++)
        {
            int r = l+i-1;
            DP1[l][r] = abs(A[l]-A[r]) + max(A[l] + DP1[l+1][r],A[r] + DP1[l][r-1]);
        }
    }
    for (int r = 1; r <= n; r++)
    {
        DP2[r] = DP1[1][r];
        for (int l = 1; l < r; l++)
        {
            DP2[r] = max(DP2[r],DP2[l] + DP1[l+1][r]);
        }
    }
    cout << DP2[n];
    return 0;
}