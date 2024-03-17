#include <bits/stdc++.h>
using namespace std;
int col[100];
int n;
bool isValid(int k)
{
    int r1 = k;
    for (int r2 = 1; r2 < r1; r2++)
    {
        if (col[r1] == col[r2] || abs(col[r1] - col[r2]) == r1 - r2)
            return false;
    }
    return true;
}
void solve(int idx)
{
    if (idx == n)
    {
        for (int i = 1; i <= n; i++)
            cout << col[i] << " ";
        cout << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            col[idx + 1] = i;
            if (isValid(idx + 1))
            {
                solve(idx + 1);
            }
        }
    }
}
main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        memset(col, 0, sizeof(col));
        solve(0);
    }
}