#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int n,sum;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> sum;
    bool solve[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if (j == 0)
            {
                solve[i][j] = 1;
                continue;
            }
            if (i == 0)
            {
                solve[i][j] = 0;
                continue;
            }
            if (A[i-1] > j)
            {
                solve[i][j] = solve[i-1][j];
            }
            else
            {
                // solve[i][j] = solve[i][j-A[i-1]];
                solve[i][j] = solve[i-1][j-A[i-1]] || solve[i-1][j];
            }
            
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout << solve[i][j] << " ";
        }
        cout << "\n";
    }
    cout << solve[n][sum];
    return 0;
}