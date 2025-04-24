//https://atcoder.jp/contests/dp/tasks/dp_k
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int DP[k+1],A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    DP[0] = 0;
    for (int i = 1; i < k+1; i++)
    {
        DP[i] = 0;
        for (auto a:A)
        {
            if (i - a >= 0 && DP[i-a] == 0)
            {
                DP[i] = 1;
            }
        }
    }
    cout << (DP[k]?"First":"Second");
    return 0;
}