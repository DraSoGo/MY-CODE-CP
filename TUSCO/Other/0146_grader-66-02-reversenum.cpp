#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,y = 4,c = 0;
    cin >> a;
    cout << a;
    while (a > 0)
    {
        c += (a%10)*pow(10,y);
        a /= 10;
        y--;
    }
    cout << "\n" << c << "\n" << c*2;
    }