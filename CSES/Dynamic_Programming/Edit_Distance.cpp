#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;
    cin >> a >> b;
    int la = a.length(),lb = b.length();
    int DP[lb+1][la+1];
    for (int i = 0; i <= la; i++)
    {
        DP[0][i] = i;
    }
    for (int i = 0; i <= lb; i++)
    {
        DP[i][0] = i;
    }
    for (int i = 1; i <= lb; i++)
    {
        for (int j = 1; j <= la; j++)
        {
            if (a[j-1] == b[i-1])
            {
                // DP[i][j] = min(DP[i-1][j],min(DP[i][j-1],DP[i-1][j-1]));
                DP[i][j] = DP[i-1][j-1];
            }
            else
            {
                DP[i][j] = min(DP[i-1][j],min(DP[i][j-1],DP[i-1][j-1])) + 1;
            }
        }
    }
    cout << DP[lb][la];
    return 0;
}