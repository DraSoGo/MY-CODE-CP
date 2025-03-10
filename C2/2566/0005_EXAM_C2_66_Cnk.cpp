#include <bits/stdc++.h>
using namespace std;

long long cnk(long long n,long long k)
{
    if (n == k || k == 0)
    {
        return 1;
    }
    else
    {
        return cnk(n-1,k-1) + cnk(n-1,k);
    }
    // return 0;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;
    cin >> n >> k;
    cout << cnk(n,k);
    return 0;
}