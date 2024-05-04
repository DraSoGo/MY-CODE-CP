#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    long long n,q;
    cin >> n >> q;
    long long x,a,b,A[n+1],sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    cout << sum << "\n";
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        sum += b-A[a];
        A[a] = b;
        cout << sum << "\n";
    }
    return 0;
}