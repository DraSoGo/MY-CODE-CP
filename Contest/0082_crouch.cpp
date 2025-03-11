#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n = 100,x,y;
    int cnr[n][n];
    cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                cnr[i][j] = 0;
            }
            else if (j == 1)
            {
                cnr[i][j] = i+1;
            }
            else if (i == 0)
            {
                cnr[i][j] = 1;
            }
            else
            {
                cnr[i][j] = cnr[i-1][j-1] + cnr[i-1][j];
            }
            // cout << cnr[i][j] << " ";
        }
        // cout << "\n";
    }
    int sum = 0;
    for (int i = 1; i <= max(x,y); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += cnr[x][j]*cnr[y][i-j];
            cout << j << " " << i-j << " " << cnr[x][j]*cnr[y][i-j] << "\n";
        }
    }
    cout << sum;
    return 0;
}