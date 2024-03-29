#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,x = 0,y = 1;
    cin >> a;
    long long b = a;
    cout << x << " " << y << " ";
    for (int i = 0; i < b - 2; i++)
    {
        a = x + y;
        x = y;
        y = a;
        cout << a << " ";
    }
    
    return 0;
}