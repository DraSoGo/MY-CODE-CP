#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        n % 2 == 1?n = n*3+1:n >>= 1;
    }
    cout << n << " ";
    return 0;
}