#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t,n,m,a,b = 0,c;
    cin >> t >> n;
    if (n >= 10)
    {
        a = n/15;
        n %= 15;
        b += a*300;
    }
    if (n >= 10)
    {
        n -= 15;
        b += 300;
    }
    if (n >= 3)
    {
        a = n/5;
        n %= 5;
        b += a*150;
    }
    if (n >= 3)
    {
        n -= 5;
        b += 150;
    }
    if (n >= 1)
    {
        a = n;
        b += a*50;
    }
    for (int i = 0; i < t; i++)
    {
        cin >> m;
        if (m - b >= 0)
        {
            cout << m-b;
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
    
}