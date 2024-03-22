#include <bits/stdc++.h>
using namespace std;
int DP[1001][1001];
int MCM(int A[],int i,int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (DP[i][j] != -1)
    {
        return DP[i][j];
    }
    int ans = INT_MAX;
    for (int k = i;k < j; k++)
    {
        ans = min(MCM(A,i,k)+MCM(A,k+1,j)+(A[i-1]*A[k]*A[j]),ans);
    }
    return DP[i][j] = ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        memset(DP,-1,sizeof(DP));
        cout << MCM(A,1,n-1) << "\n";
    }
    return 0;
}