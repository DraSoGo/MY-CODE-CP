#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned long long t,m,n,md = 1e9+7;
    cin >> t;
    unsigned long long A[101][101];
    memset(A,0,sizeof(A));
    for (unsigned long long i = 0; i < 101; i++)
    {
        for (unsigned long long j = 0; j < 101; j++)
        {
            if (i == 0 || j == 0)
            {
                A[i][j] = 1;
            }
        }
    }
    for (unsigned long long i = 1; i < 101; i++)
    {
        for (unsigned long long j = 1; j < 101; j++)
        {
            A[i][j] = ((A[i-1][j]%md) + (A[i][j-1]%md))%md;
        }
    }
    while (t--)
    {
        cin >> m >> n;
        cout << A[m-1][n-1] << "\n";
    }
    
    return 0;
}