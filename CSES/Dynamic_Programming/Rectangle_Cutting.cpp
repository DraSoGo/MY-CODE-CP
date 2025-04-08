#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a >> b;
    long long DP[a+1][b+1];
    for (int i = 0; i < a+1; i++)
    {
        for (int j = 0; j < b+1; j++)
        {
            DP[i][j] = INT_MAX;
        }
    }
    for (int i = 0; i <= a; i++)
    {
        DP[i][1] = i-1;
    }
    for (int i = 0; i <= b; i++)
    {
        DP[1][i] = i-1;
    }
    for (int i = 2; i < a+1; i++)
    {
        for (int j = 2; j < b+1; j++)
        {
            if (i == j)
            {
                DP[i][j] = 0;
                continue;
            }
            for (int k = 1; k < i; k++)
            {
                DP[i][j] = min(DP[i][j],DP[k][j] + DP[i-k][j]+1);
            }
            for (int k = 1; k < j; k++)
            {
                DP[i][j] = min(DP[i][j],DP[i][k] + DP[i][j-k]+1);
            }
        }
    }
    // for (int i = 1; i < a+1; i++)
    // {
    //     for (int j = 1; j < b+1; j++)
    //     {
    //         cout << DP[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    cout << DP[a][b];
    return 0;
}