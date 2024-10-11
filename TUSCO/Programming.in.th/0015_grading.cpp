#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c;
    cin >> a >> b >> c;
    x = a+b+c;
    if (x >= 80)
    {
        cout << 'A';
    }
    else if (x >= 70)
    {
        cout << 'B';
    }
    else if (x >= 60)
    {
        cout << 'C';
    }
    else if (x >= 50)
    {
        cout << 'D';
    }
    else
    {
        cout << "F " << 50-x ;
    }
    
}