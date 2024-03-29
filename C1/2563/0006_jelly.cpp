#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,n,k,ch;
    string str;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        cin >> n >> k;
        char str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        int B[26];
        memset(B,0,sizeof(B));
        for (int i = 0; i < n; i++)
        {
            B[str[i] - 97]++;
        }
        ch = 0;
        for (int i = 0; i < 26; i++)
        {
            // cout << B[i] << " ";
            if (B[i] <= k || B[i] == 0)
            {
                ch = 1;
            }
            else
            {
                ch = 0;
                break;
            }
        }
        // cout << "\n";
        if (ch == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
}