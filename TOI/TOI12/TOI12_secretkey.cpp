#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool ch;
    int n;
    string a,b,c,aa,bb,cc;
    cin >> a >> b >> n;
    while (n--)
    {
        cin >> c;
        bool DP[a.length()+1][b.length()+1];
        memset(DP,0,sizeof(DP));
        DP[0][0] = 1;
        for (int i = 0; i <= a.length(); i++)
        {
            for (int j = 0; j <= b.length(); j++)
            {
                if (j >= 1)
                {
                    if (DP[i][j-1] && b[j-1] == c[i+j-1])
                    {
                        DP[i][j] = 1;
                    }
                }
                if (i >= 1)
                {
                    if (DP[i-1][j] && a[i-1] == c[i+j-1])
                    {
                        DP[i][j] = 1;
                    }
                }
                // cout << DP[i][j] << " ";
            }
            // cout << "\n";
        }
        if (DP[a.length()][b.length()])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        
    }
}