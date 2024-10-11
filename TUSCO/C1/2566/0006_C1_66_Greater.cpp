#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,x;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        cout << lower_bound(A,A+n,x)-A << "\n";
    }
}