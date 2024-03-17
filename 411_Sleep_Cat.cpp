#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y;
    cin >> a;
    x = ((365 - a) * 63) + (a * 127);
    y = abs(x-30000);
    if (x >= 30000)
    {
        cout << "Cat will run away\n" << y/60 << " " << y % 60;
    }
     else
     {
        cout << "Cat sleeps well\n" << y/60 << " " << y % 60;
     }
     
}