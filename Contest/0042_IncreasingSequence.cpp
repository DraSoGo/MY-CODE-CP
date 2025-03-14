#include <bits/stdc++.h>
using namespace std;

int co = 0;

void solve(int i,int sum,int n)
{
    if (sum > n)
    {
        return;
    }
    if (n == sum)
    {
        // for (int i = 0; i < A.size(); i++)
        // {
        //     cout << A[i] << " ";
        // }
        // cout << "\n";
        // cout << n << " " << sum << "\n";
        co++;
        return;
    }
    // cout << "\n";
    // cout << n-i << "\n";
    for (int j = i; j <= n-sum; j++)
    {
        // cout << j << " ";
        solve(j,sum+j,n);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(1,0,n);
    cout << co;
    return 0;
}