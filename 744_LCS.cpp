#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        string sta,stb;
        cin >> a >> b >> sta >> stb;
        int DP[a+1][b+1];
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                if (i == 0 || j == 0)
                {
                    DP[i][j] = 0;
                }
                else
                {
                    if (sta[i-1] == stb[j-1])
                    {
                        DP[i][j] = DP[i-1][j-1]+1;
                    }
                    else
                    {
                        DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                    }
                }
            }
        }
        cout << DP[a][b] << "\n";
    }
    
    return 0;
}