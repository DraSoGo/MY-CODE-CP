#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,a = 0,b = 0,c = 0,d = 0;
    string x,y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x[0] == '-' && y[0] != '-')
        {
            b = b + 1;
        }
        else if (x[0] == '-' && y[0] == '-')
        {
            c = c + 1;
        }
        else if (x[0] != '-' && y[0] == '-')
        {
            d = d + 1;
        }
        else
        {
            a = a + 1;
        }
        
    }
    cout << "Q1=" << a << "\n";
    cout << "Q2=" << b << "\n";
    cout << "Q3=" << c << "\n";
    cout << "Q4=" << d;
}