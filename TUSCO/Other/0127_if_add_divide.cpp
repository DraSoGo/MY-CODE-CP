#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,z;
    cin >> x >> y >> z;
    if (z != 0)
    {
        cout << fixed << setprecision(6) << (x+y)/z;
    }
    else
    {
        cout << "cannot divide by zero";
    }
    
    
}