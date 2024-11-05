#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t,a;
    cin >> n >> t;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    while (t--)
    {
        cin >> a;
        cout << lower_bound(A,A+n,a)-A << "\n";
    }
    
    return 0;
}