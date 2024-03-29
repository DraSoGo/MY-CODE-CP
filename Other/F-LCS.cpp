#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    string sa,sb,ans = "";
    cin >> sa >> sb;
    a = sa.length();
    b = sb.length();
    int DP[a+1][b+1];
    int mem[a+1][b+1];
    memset(DP,0,sizeof(DP));
    memset(mem,0,sizeof(mem));
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (sa[i-1] == sb[j-1])
            {
                DP[i][j] = 1+DP[i-1][j-1];
                mem[i][j] = 1;
            }
            else
            {
                DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }
    // for (int i = 0; i <= a; i++)
    // {
    //     for (int j = 0; j <= b; j++)
    //     {
    //         cout << mem[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    int idx = b+1;
    for (int i = a; i >= 0; i--)
    {
        //cout << idx << "\n";
        for (int j = idx-1; j >= 0; j--)
        {
            if (mem[i][j] == 1 && j < idx)
            {
                ans += sb[j-1];
                idx = j;
                break;
            }
        }
    }
    for (int i = ans.length()-1; i >= 0; i--)
    {
        cout << ans[i];
    }
    
    // cout << DP[a][b] << "\n";
    // cout << ans;
    return 0;
}