#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    int a = s.length(),b = t.length();
    int DP[a+1][b+1];
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            if (i == 0)
            {
                DP[i][j] = j;
            }
            else if (j == 0)
            {
                DP[i][j] = i;
            }
            else if (s[i-1] == t[j-1])
            {
                DP[i][j] = DP[i-1][j-1];
            }
            else
            {
                DP[i][j] = 1 + min(DP[i-1][j-1],min(DP[i-1][j],DP[i][j-1]));
            }
        }
    }
    // for (int i = 0; i <= a; i++)
    // {
    //     for (int j = 0; j <= b; j++)
    //     {
    //         cout << DP[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << DP[a][b];
}