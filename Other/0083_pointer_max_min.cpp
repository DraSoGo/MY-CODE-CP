#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,temp;
    int *pmax,*pmin;
    cin >> a >> b;
    int mx = max(a,b),mn = min(a,b);
    pmax = &mx;
    pmin = &mn;
    cout << *pmin << "\n" << *pmax;
}