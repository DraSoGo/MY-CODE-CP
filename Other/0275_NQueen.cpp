#include <bits/stdc++.h>
using namespace std;
int n,co;
int col[100];
bool is_valid()
{
    for (int r1 = 2; r1 <= n; r1++)
    {
        for (int r2 = 1; r2 < r1; r2++)
        {
            if (col[r1] == col[r2] || abs(col[r1] - col[r2]) == r1 - r2)
                return false;
        }
    }
    return true;
}
void solve(int idx)
{
    if (idx == n)
    {
        if (is_valid())
        {
            co = 1;
            cout << "[";
            for (int i = 1; i <= n; i++)
            {
                cout << col[i] << " ";
            }
            cout << "] ";
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            col[idx + 1] = i;
            solve(idx + 1);
        }
    }
}

main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        co = 0;
        cin >> n;
        solve(0);
        if (co == 0)
        {
            cout << -1;
        }
        
        cout << endl;
    }
}