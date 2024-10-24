#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,n,sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}