#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,ch = 0,c = 1;
    cin >> a;
    while (a > c)
    {
        c *= 2;
        ch++;
    }
    ch++;
    cout << ch;
}