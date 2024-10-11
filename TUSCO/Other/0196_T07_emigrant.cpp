#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,z = 5000,x0,y0,x,y,p = 0;
    float d;
    cin >> n >> x0 >> y0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        d = sqrt(pow(x-x0,2) + pow(y-y0,2));
        d *= 10;
        if (d < z)
        {
            p++;
        }
    }
    cout << p;
}