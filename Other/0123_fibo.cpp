#include<bits/stdc++.h>
using namespace std;
long long F[1000];
int fib(long long n)
{
    if (n <= 1)
    {
        return 1;
    }
    if (F[n] > 0)
    {
        return F[n];
    }
    else
    {
        return fib(n-1) + fib(n-2);
        return F[n];
    }
}
int fibbtu(long long n)
{
    int Fibo[1000];
    Fibo[0] = 1;
    Fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
    }
    return Fibo[n];
}
int main()
{
    memset(F,0,sizeof(F));
    int n;
    cin >> n;
    cout << fib(n);
    // cout << "\n" << fibbtu(30);
}
