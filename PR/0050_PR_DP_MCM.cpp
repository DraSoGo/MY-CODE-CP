#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int MCM(int arr[],int i,int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int MN =INT_MAX;
    for (int k = i; k < j; k++)
    {
        MN = min(MN,(MCM(arr,i,k) + MCM(arr,k + 1,j) + arr[i - 1]*arr[k]*arr[j]));
    }
    return dp[i][j] = MN;
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        memset(dp,-1,sizeof(dp));
        cout << MCM(arr,1,n - 1) << "\n";
    }
    
}