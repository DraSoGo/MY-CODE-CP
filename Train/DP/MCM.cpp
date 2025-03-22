#include <bits/stdc++.h>
using namespace std;

const int sz = 1e4;
int A[sz], DP[sz][sz];
int n;

int MCM(int l,int r)
{
    if (l >= r)
    {
        return 0;
    }
    if (DP[l][r] != -1)
    {
        return DP[l][r];
    }
    int mn = INT_MAX;
    for (int i = l; i < r; i++)
    {
        mn = min(mn,MCM(l,i) + MCM(i+1,r) + (A[l-1]*A[i]*A[r]));
    }
    return DP[l][r] = mn;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    memset(DP, -1, sizeof(DP));
    cout << MCM(1, n - 1);
    return 0;
}
/*
INPUT
4
10 30 5 60
OUTPUT
4500
*/