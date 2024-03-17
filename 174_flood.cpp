#include <bits/stdc++.h>
using namespace std;
void FD(int *a , int *h , int b , int c)
{
    int d = 1 , mx = a[b];
    if (b > c)
    {
        d = -1;
    }
    for (int i = b;(i > c) || (i < c); i = i + d)
    {
        h[i - (d < 0)] = mx;
        mx = max(mx,a[i + d]);
    }
    
}
main()
{
    int n , mx = -99999 , mxx = 0;
    cin >> n;
    int a[n] , h[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mxx = mxx + (a[i] >= mx) * (i - mxx);
        mx = max(a[i],mx);
    }
    FD(a,h,0,mxx);
    FD(a,h,n - 1,mxx);
    for (int i = 0; i < n - 1; i++)
    {
        cout << h[i] << " ";
    }
}