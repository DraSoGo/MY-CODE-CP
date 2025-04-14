//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int A[n],DP[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    DP[0] = 0;
    DP[1] = abs(A[1]-A[0]);
    for (int i = 2; i < n; i++)
    {
        DP[i] = min(DP[i-1]+abs(A[i-1]-A[i]),DP[i-2]+abs(A[i-2]-A[i]));
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << DP[i] << " ";
    // }
    // cout << "\n";
    cout << DP[n-1];
    return 0;
}