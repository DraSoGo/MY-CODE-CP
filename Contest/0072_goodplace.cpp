#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int x[n],y[n],sumx = 0,sumy = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    cout << x[n/2] << " " << y[n/2];
    return 0;
}