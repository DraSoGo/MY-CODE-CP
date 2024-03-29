#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
int fibbtu(long long n)
{
    long long Fibo[10000];
    Fibo[0] = 1;
    Fibo[1] = 1;
    Fibo[2] = 1;
    Fibo[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        Fibo[i] = (Fibo[i-1] + Fibo[i-2] + Fibo[i - 3] + Fibo[i - 4]);
        Fibo[i] = Fibo[i] % mod;
    }
    return Fibo[n];
}
int main()
{
    long long a;
    cin >> a;
    cout << fibbtu(a - 1);
}
