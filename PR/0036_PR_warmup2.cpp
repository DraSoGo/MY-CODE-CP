#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m = 1000000000+7,k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = k + (((i*i) - ((i - 1)*(i - 1))) % m);
    }
    cout << k % m;
}