#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
    int n1 = s1.length(),n2 = s2.length();
    int DP[n1+1][n2+1];
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            if (i == 0 || j == 0)
            {
                DP[i][j] = 0;
                continue;
            }
            if (s1[i-1] == s2[j-1])
            {
                DP[i][j] = 1+DP[i-1][j-1];
            }
            else
            {
                DP[i][j] = max(DP[i][j-1],DP[i-1][j]);
            }
        }
    }
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            cout << DP[i][j] << " ";
        }
        cout << "\n";
    }
    cout << DP[n1][n2];
    return 0;
}