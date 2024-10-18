#include <bits/stdc++.h>
using namespace std;

int Fib[51];

char solve(int a,int b)
{
    if (a == 1)
    {
        return 'A';
    }
    else if(a == 2)
    {
        return 'B';
    }
    int mid = Fib[a-2];
    if (b <= mid)
    {
        solve(a-2,b);
    }
    else
    {
        solve(a-1,b-mid);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Fib[1] = Fib[2] = 1;
    for (int i = 3; i < 51; i++)
    {
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    int t,a,b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << solve(a,b) << "\n";
    }
    
    return 0;
}
