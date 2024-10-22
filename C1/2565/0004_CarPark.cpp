#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int h1,m1,h2,m2,t;
    cin >> h1 >> m1 >> h2 >> m2;
    t = -(h1*60+m1)+(h2*60+m2);
    if (t <= 15)
    {
        cout << 0;
    }
    else if (t <= 60*3)
    {
        cout << ceil(t/60.0) * 10;
    }
    else if (t <= 60*6)
    {
        cout << ceil((t-60*3)/60.0) * 20 + 30;
    }
    else
    {
        cout << 200;
    }
    
    return 0;
}
