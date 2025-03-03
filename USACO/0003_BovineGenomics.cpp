#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    char c;
    cin >> n >> m;
    int A[m][26],ch = 0,t;
    memset(A,0,sizeof(A));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            A[j][c-'A'] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (A[j][c-'A'] == 0)
            {
                A[j][c-'A']++;
            }
            else if (A[j][c-'A'] == -1)
            {
                A[j][c-'A'] = -2;
            }
            // A[j][c-'A'] != -1 ? A[j][c-'A']++ : A[j][c-'A'] = -2;
        }
    }
    for (int i = 0; i < m; i++)
    {
        t = 0;
        for (int j = 0; j < 26; j++)
        {
            if (A[i][j] == -2)
            {
                t = 0;
                break;
            }
            A[i][j] > 0 ? t = 1 : t = t;
        }
        t == 1 ? ch++ : ch = ch;
        // if (t == 1)
        // {
        //     cout << i << "\n";
        // }
    }
    cout << ch;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < 26; j++)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    return 0;
}