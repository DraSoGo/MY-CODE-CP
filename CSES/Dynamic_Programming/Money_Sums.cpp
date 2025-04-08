#include <bits/stdc++.h>
using namespace std;

const int szn = 1e2+1,szsum = 1e5+1;
bool DP[szn][szsum];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int C[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> C[i];
    }
    DP[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < szsum; j++)
        {
            DP[i][j] = DP[i-1][j];
            if (j-C[i] >= 0 && DP[i-1][j-C[i]])
            {
                DP[i][j] = DP[i-1][j-C[i]];
            }
            // cout << DP[i][j] << " ";
        }
        // cout << "\n";
    }
    vector <int> ANS;
    for (int i = 1; i < szsum; i++)
    {
        if (DP[n][i])
        {
            ANS.push_back(i);
        }
    }
    cout << ANS.size() << "\n";
    for (int i = 0; i < ANS.size(); i++)
    {
        cout << ANS[i] << " ";
    }
    
    return 0;
}