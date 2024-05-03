// #pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,a;
    cin >> n >> m;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    long long l = 0,r = 1e13,mid;
    while (l < r)
    {
        mid = (l+r)/2;
        a = 0;
        for (int i = 0; i < n; i++)
        {
            a += mid/A[i];
        }
        if (a >= m)
        {
            r = mid;
        }
        else
        {   
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}