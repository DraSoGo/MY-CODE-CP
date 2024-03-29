#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,sum = 0,ch = 0;
    do
    {
        cin >> a;
        sum += a;
        ch++;
    }
    while (a != 0);
    cout << fixed << setprecision(2) << sum/(ch-1);
    
}