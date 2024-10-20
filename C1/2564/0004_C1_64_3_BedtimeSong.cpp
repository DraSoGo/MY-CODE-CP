#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double h,m,t;
    cin >> h >> m;
    t = -(h*60+m+15)+(21*60);
    if (t <= 0)
    {
      cout << "0 0";
    }
    else
    {
      cout << t << " " << ceil(t/2);
    }
    
    return 0;
}
