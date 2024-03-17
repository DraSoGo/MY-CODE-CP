#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sj,si,mx = 0;
    cin >> a >> b >> c;
    int A[a+1][b+1];
    int DP[a+1][b+1];
    pair <int,int> s;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> A[i][j];
            DP[i][j] = A[i][j];
        }
    }
    for (int k = a-1; k >= 0; k--)
    {
        for (int l = b-1; l >= 0; l--)
        {
            s = {k,l};
            for (int i = 0; i <= a; i++)
            {
                for (int j = 0; j <= b; j++)
                {
                    DP[i][j] = 0;
                }
            }
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    DP[i][j] = A[i][j];
                }
            }
            //cout << k << " " << l << "\n";
            si = 0;
            for (int i = s.first; i >= 0; i--)
            {
                sj = 0;
                for (int j = s.second; j >= 0; j--)
                {
                    if (j == s.second)
                    {
                        DP[i][j] += DP[i+1][j];
                    }
                    else if (i == s.first)
                    {
                        DP[i][j] += DP[i][j+1];
                    }
                    else
                    {
                        DP[i][j] += max(DP[i][j+1],DP[i+1][j]);
                    }
                    mx = max(mx,DP[i][j]);
                    sj++;
                    if (sj + si >= c)
                    {
                        break;
                    }
                }
                si++;
            }
            // for (int i = 0; i < a; i++)
            // {
            //     for (int j = 0; j < b; j++)
            //     {
            //         cout << DP[i][j] << " ";
            //     }
            //     cout << "\n";
            // }
        }
    }
    cout << mx;
 }