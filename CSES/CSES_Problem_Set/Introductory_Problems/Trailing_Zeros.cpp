#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long i = 5, n, co = 0;
    cin >> n;
    while (i <= n)
    {
        co += n / i;
        i *= 5;
    }
    cout << co;
    return 0;
}