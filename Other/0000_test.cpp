#include <bits/stdc++.h>
using namespace std;

const int sz = 4010;
int n, idx = 0, ans = 0;
int A[sz], DP[sz][sz];
map<int, int> compress;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        if (compress.find(A[i]) == compress.end())
        {
            compress[A[i]] = idx++;
        }
    }
    for (auto [i,j]:compress)
    {
        cout << i << " " << j << "\n";
    }
    
    for (int i = 1; i <= n; i++)
    {
        A[i] = compress[A[i]];
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            DP[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n";
        for (int j = 0; j < i; j++)
        {
            DP[i][A[j]] = max(DP[i][A[j]], DP[j][A[i]] + 1);
            cout << DP[i][A[j]] << " ";
            ans = max(ans, DP[i][A[j]]);
        }
        cout << "\n";
    }

    cout << ans << "\n";
    return 0;
}
