#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k,ch = 0;
    cin >> a >> b >> c;
    int B[b][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            B[i][j] = 0;
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (B[i][j] == 0)
            {
                break;
            }
            for (int l = 0; l < b; l++)
            {
                if (B[i][j] == 0)
                {
                    break;
                }
                if (abs(B[i][j] - B[i + 1][l]) < c)
                {
                    ch = 1;
                    break;
                }
                
            }
            if (ch == 1)
            {
                break;
            }
            
        }
        if (ch == 1)
        {
            break;
        }
    }
    if (ch == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}