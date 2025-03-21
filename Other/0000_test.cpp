#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,w,co = 0,md = 1e9+7;
    cin >> n >> w;
    for (int i = n; i <= w; i++)
    {
        co += i;
        co %= md;
    }
    cout << co;
    return 0;
}