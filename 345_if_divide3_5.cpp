#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x % 3 == 0 && x % 5 == 0)
    {
        cout << "3 5";
    }
    else if (x % 3 == 0)
    {
        cout << 3;
    }
    else if (x % 5 == 0)
    {
        cout << 5;
    }
    else
    {
        cout << x;
    }
}