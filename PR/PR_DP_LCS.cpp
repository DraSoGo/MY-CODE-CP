#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a;
    cin >> a;
    for (int k = 0; k < a; k++)
    {
        string x,y;
        cin >> m >> n >> x >> y;
        int L[m][n];
        for (int i = 0; i <= m; i++)
        {
            L[i][0] = 0;
        }
        for (int i = 0; i <= m; i++)
        {
            L[0][i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (x[i] == y[j])
                {
                    L[i][j] = L[i - 1][j - 1] + 1;
                }
                else
                {
                    L[i][j] = max(L[i - 1][j],L[i][j - 1]);
                }
            }
        }
        cout << L[m][n] << "\n";
    }
    
}