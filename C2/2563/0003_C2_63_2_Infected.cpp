#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string pat,str;
    int n;
    cin >> pat >> n;
    while (n--)
    {
        cin >> str;
        int DP[str.length()+1][pat.length()+1];
        memset(DP,0,sizeof(DP));
        for (int i = 1; i <= str.length(); i++)
        {
            for (int j = 1; j <= pat.length(); j++)
            {
                if (str[i-1] == pat[j-1])
                {
                    DP[i][j] = 1+DP[i-1][j-1];
                }
                else
                {
                    DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
        cout << DP[str.length()][pat.length()] << "\n";
    }
    return 0;
}