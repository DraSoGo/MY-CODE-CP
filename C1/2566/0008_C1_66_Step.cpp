#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,c = 0,mn = INT_MAX,idx = 0,s = 0,a = 0;
    cin >> n;
    int A[n],B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    while (c != 1)
    {
        if (idx >= n)
        {
            c = 1;
            break;
        }
        if (A[idx] < mn)
        {
            mn = A[idx];
            idx = 0;
            continue;
        }
        if (A[idx] == mn)
        {
            idx++;
            continue;
        }
        A[idx] -= B[idx];
        s++;
        if (A[idx] < 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << s;
    return 0;
}