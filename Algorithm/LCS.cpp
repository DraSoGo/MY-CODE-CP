#include <bits/stdc++.h>
using namespace std;

int DP[1001][1001];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    string s1,s2;
    cin >> n >> m >> s1 >> s2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i-1] == s2[j-1])
            {
                DP[i][j] = DP[i-1][j-1]+1;
            }
            else
            {
                DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
            // cout << DP[i][j] << " ";
        }
        // cout << "\n";
    }
    cout << DP[n][m];
    return 0;
}