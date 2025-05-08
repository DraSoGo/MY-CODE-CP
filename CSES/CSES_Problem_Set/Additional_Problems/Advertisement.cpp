#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,ans = 0;
    stack <pair<long long,long long>> S;
    cin >> n;
    long long A[n+1],NS[2][n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    S.push({0,0});
    for (int i = 1; i <= n; i++)
    {
        while (S.top().first >= A[i])
        {
            S.pop();
        }
        NS[0][i] = S.top().second;
        S.push({A[i],i});
    }
    while (!S.empty())
    {
        S.pop();
    }
    S.push({0,n+1});
    for (int i = n; i >= 1; i--)
    {
        while (S.top().first >= A[i])
        {
            S.pop();
        }
        NS[1][i] = S.top().second;
        S.push({A[i],i});
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << NS[0][i] << " ";
    // }
    // cout << "\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << NS[1][i] << " ";
    // }
    // cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans,(NS[1][i] - NS[0][i] - 1)*A[i]);
    }
    cout << ans;
    return 0;
}