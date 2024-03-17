#include <bits/stdc++.h>
using namespace std;
int mod = pow(10,9) + 7;
int pw(long long a,long long b)
{
    long long ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = (ans * a) % mod;
    }
    return ans;
}
int main()
{
    long long a,b,c,sum = 0,d;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        cin >> b >> c;
        d = pw(b,c);
        //cout << d << "\n";
        sum = (sum + d) % mod;
    }
    cout << sum;
    return 0;
}