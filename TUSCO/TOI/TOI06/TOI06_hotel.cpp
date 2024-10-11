#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum = 0;
    cin >> a;
    while (a >= 9)
    {
        sum += 3000;
        a -= 15;
    }
    while (a >= 4)
    {
        sum += 1500;
        a -= 5;
    }
    while (a >= 2)
    {
        sum += 800;
        a -= 2;
    }
    while (a >= 1)
    {
        sum += 500;
        a -= 1;
    }
    cout << sum;
}