#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1000;
    long long A[n][n],a,b,c = 1;
    cin >> a >> b;
    memset(A,0,sizeof(A));
    for (int i = 0; i < n; i++)
    {
        A[0][i] = i+1;
    }
    for (int i = 1; i < n; i++)
    {
        A[i][0] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            A[i][j] += A[i-1][j-1] + A[i][j-1];
            A[i][j] %= 1000000007;
        }
    }
    cout << A[b-2][a+b-2];
}