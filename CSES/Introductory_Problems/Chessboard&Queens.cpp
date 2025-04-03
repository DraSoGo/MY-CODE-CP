#include <bits/stdc++.h>
using namespace std;

const int n = 8;
char T[n][n];
bool col[n] = {}, diag1[2 * n - 1] = {}, diag2[2 * n - 1] = {};
int co = 0;

void gen(int r)
{
    if (r == n)
    {
        co++;
        return;
    }
    for (int c = 0; c < n; c++)
    {
        if (T[r][c] == '*' || col[c] || diag1[r + c] || diag2[r - c + n - 1])
            continue;

        col[c] = diag1[r + c] = diag2[r - c + n - 1] = 1;
        gen(r + 1);
        col[c] = diag1[r + c] = diag2[r - c + n - 1] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }

    gen(0);
    cout << co;
    return 0;
}
