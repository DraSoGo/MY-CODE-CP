#include <bits/stdc++.h>
using namespace std;

long long sol(long long n,long long k)
{
    if (n == k || k == 0)
    {
        return 1;
    }
    else
    {
        return sol(n-1,k-1) + sol(n-1,k);
    }
    return 0;
}

int main()
{
    long long n,k;
    cin >> n >> k;
    cout << sol(n,k);
}