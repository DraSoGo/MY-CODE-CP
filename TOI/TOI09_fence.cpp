#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 2;
    while (t--)
    {
        int A[501][501];
        memset(A,0,sizeof(A));
        int m,n,x,r,c,mx = 0,b,s ;
        cin >> m >> n;
        cin >> x;
        while (x--)
        {
            cin >> r >> c;
            A[r+1][c+1] = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
               A[i][j] = A[i][j] - A[i-1][j-1] + A[i-1][j] + A[i][j-1]; 
            }
        }
        for (int i = 1; i <= m; i++)
        {
            int b,s;
            for (int j = 1; j <= n; j++)
            {
                int sz = min(m-i+1,n-j+1);
                for (int k = 1; k <= sz; k++)
                {
                    b = A[i+k-1][j+k-1] - A[i+k-1][j-1] - A[i-1][j+k-1] + A[i-1][j-1];
                    s = A[i+k-2][j+k-2] - A[i+k-2][j] - A[i][j+k-2] + A[i][j];
                    if (b == s)
                    {
                        mx = max(mx,k);
                    }
                }
            }
        }
        // for (int i = 0; i <= m; i++)
        // {
        //     for (int j = 0; j <= n; j++)
        //     {
        //         cout << A[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << mx << "\n";
    }
    
}