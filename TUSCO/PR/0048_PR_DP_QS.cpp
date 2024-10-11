#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y;
    cin >> n;
    int a[n],qs[n];
    memset(qs,0,sizeof(qs));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qs[0] = a[0];
    for (int i = 1; i <= n; i++)
    {
        qs[i] = qs[i] + qs[i - 1] + a[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        cout << qs[y] - qs[x - 1] << "\n";
    }
    
}