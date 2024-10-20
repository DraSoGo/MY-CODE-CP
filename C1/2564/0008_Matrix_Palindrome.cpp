#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n;
    cin >> m >> n;
    char T[n][m],ANS[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
            ANS[i][j] = 'N';
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool ch = 1;
        for (int j = 0; j < m/2; j++)
        {
            if (T[i][j] != T[i][m-j-1])
            {
                ch = 0;
                break;
            }
        }
        if (ch)
        {
            for (int j = 0; j < m; j++)
            {
                ANS[i][j] = 'H';
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        bool ch = 1;
        for (int j = 0; j < n/2; j++)
        {
            if (T[j][i] != T[n-j-1][i])
            {
                ch = 0;
                break;
            }
        }
        if (ch)
        {
            for (int j = 0; j < n; j++)
            {
                if (ANS[j][i] == 'H')
                {
                    ANS[j][i] = 'B';
                }
                else
                {
                    ANS[j][i] = 'V';
                }
                
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ANS[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}
