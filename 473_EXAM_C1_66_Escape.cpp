#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long n,x = 1e9+7,co,ans = 1;
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        co = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> b;
            if (b == a)
            {
                co++;
            }
        }
        ans *= co;
        ans %= x;
    }
    cout << ans;
}