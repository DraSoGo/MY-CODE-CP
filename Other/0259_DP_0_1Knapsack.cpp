#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,c;
    cin >> c;
    while (c--)
    {
        cin >> n >> w;
        int A[n+1][w+1],W[w],C[n],ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> C[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> W[i];
        }
        memset(A,0,sizeof(A));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (W[i-1] > j)
                {
                    A[i][j] = A[i-1][j];
                }
                else
                {
                    A[i][j] = max(A[i-1][j],C[i-1] + A[i-1][j-W[i-1]]);
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         cout << A[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << A[n][w] << "\n";
    }
}