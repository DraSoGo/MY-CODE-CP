#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b1,b2,b3;
    cin >> a;
    b1 = a/1000;
    a %= 1000;
    b2 = a/500;
    a %= 500;
    b3 = a/100;
    a %= 100;
    if (b3 > 0)
    {
        cout << "100 : " << b3 << "\n";
    }
    if (b2 > 0)
    {
        cout << "500 : " << b2 << "\n";
    }
    if (b1 > 0)
    {
        cout << "1000 : " << b1 << "\n";
    }

}