#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,s;
    cin >> n;
    long long A[n],B[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    B[0] = A[0];
    for (long long i = 1; i < n; i++)
    {
        B[i] = A[i] + B[i-1];
    }
    for (long long i = 0; i < n; i++)
    {
        B[i] /= i+1;
    }
    cin >> m;
    for (long long i = 0; i < m; i++)
    {
        cin >> s;
        cout << lower_bound(B,B+n,s)-B << "\n";
    }
    
}