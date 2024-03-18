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
        string sa,sb;
        cin >> a >> b >> sa >> sb;
        int DP[a+1][b+1];
        memset(DP,0,sizeof(DP));
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                if (sa[i-1] == sb[j-1])
                {
                    DP[i][j] = 1+DP[i-1][j-1];
                }
                else
                {
                    DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
        cout << DP[a][b] << "\n";
    }
    
    return 0;
}