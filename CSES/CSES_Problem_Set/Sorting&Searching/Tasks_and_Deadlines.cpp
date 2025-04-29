#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,r = 0,f = 0;
    cin >> n;
    pair<long long,long long> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        f += A[i].first;
        r += A[i].second-f;
    }
    cout << r;
    return 0;
}
