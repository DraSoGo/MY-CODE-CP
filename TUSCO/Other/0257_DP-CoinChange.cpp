#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A,A+n);
        cin >> a;
        int B[n+1][a*n];
        memset(B,0,sizeof(B));
        for (int i = 0; i < n; i++)
        {
            B[i][a] = 1;
        }
        for (int i = 0; i < a; i++)
        {
            B[n][i] = 0;
        }
        for (int i = n-1; i >= 0; i--)
        {
            for (int j = a-1; j >= 0; j--)
            {
               B[i][j] += B[i+1][j] + B[i][j + A[i]];
            }
        }
        cout << B[0][0] << "\n";
    }
}