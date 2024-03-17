#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c = 1;
    cin >> a;
    while (a != 1)
    {
        if (a % 2 != 0)
        {
            a--;
            c++;
        }
        a = a/2;
    }
    cout << c;
}