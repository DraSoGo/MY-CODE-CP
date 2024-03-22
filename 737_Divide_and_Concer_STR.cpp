#include <bits/stdc++.h>
using namespace std;

long long Fib[100];

char SV(int n,int m)
{
    if (n == 0)
    {
        return 'A';
    }
    else if (n == 1)
    {
        return 'B';
    }
    long long one = Fib[n-1],two = Fib[n-2];
    if (m > one)
    {
        SV(n-2,m-one);
    }
    else
    {
        SV(n-1,m);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    int n,m,t;
    Fib[0] = 1;
    Fib[1] = 1;
    for (int i = 2; i < 20; i++)
    {
        Fib[i] = Fib[i-1]+Fib[i-2];
    }
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << SV(n,m) << "\n";
    }
    return 0;
}