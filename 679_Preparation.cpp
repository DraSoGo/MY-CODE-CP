#include <bits/stdc++.h>
using namespace std;
long long sz = 1002,md = 1000000007;
long long A[1002][1002];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(A,0,sizeof(A));
    for (long long i = 1; i < sz; i++)
    {
        A[1][i] = i; 
    }
    
    for (long long i = 2; i < sz; i++)
    {
        for (long long j = 1; j < sz; j++)
        {
            if (j < i)
            {
                A[i][j] = 0;
            }
            else if (j >= i)
            {
                A[i][j] = ((A[i-1][j-1]%md) + (A[i][j-1]%md))%md;
            }
        }
    }
    long long t,a,b,c,ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            ans = A[c-1][b-1];
        }
        else
        {
            ans = A[c-1][b+c-1];
        }
        if (ans == 0)
        {
            ans = 1;
        }
        
        cout << ans << "\n";
    }
    return 0;
}