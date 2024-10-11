#include <bits/stdc++.h>
using namespace std;
int a,b,co = 0;
void move(int x,int y)
{
    if (x <= a && y <= b && x >= y)
    {
        if (x == a && y == b)
        {
            co++;
        }
        move(x,y+1);
        move(x+1,y);
    }
}
int main()
{
    cin >> a >> b;
    move(0,0);
    cout << co;
}