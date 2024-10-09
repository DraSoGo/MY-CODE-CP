#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,n,cx = 0,cy = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (abs(x) % 2 == 0)
        {
            cx++;
        }
        else
        {
            cy++;
        }
    }
    cout << "X coordinate: " << cx;
    cout << "\nY coordinate: " << cy;
    return 0;
}