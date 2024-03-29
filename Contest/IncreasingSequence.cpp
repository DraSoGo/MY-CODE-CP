#include <bits/stdc++.h>
using namespace std;

int co = 0;

void solve(int m, int n, int sum)
{
    if (sum > n)
    {
        return;
    }
    if (sum == n)
    {
        co++;
        return;
    }
    else
    {
        for (int i = m; i <= n-sum; i++)
        {
            solve(i, n, sum + i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(1, n, 0);
    cout << co << "\n";
}