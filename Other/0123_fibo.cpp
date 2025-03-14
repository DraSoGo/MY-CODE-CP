#include<bits/stdc++.h>
using namespace std;
long long F[1000];
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
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << fibbtu(n);
    return 0;
}
