#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int h1,h2,m1,m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int cal1 = h1*60+m1;
    int cal2 = h2*60+m2;
    double tmh = (double(cal2 - cal1)/60.0);
    int sum,ch = 0;
    if (tmh*60 <= 15)
    {
        cout << 0;
        return 0;
    }
    tmh = ceil(tmh);
    cout << tmh << "\n";
    if (tmh >= 4 && tmh <= 6)
    sum = (tmh) * 10;
    cout << sum << "\n";
    if (tmh >= 4 && tmh <= 6)
    {
        sum += (tmh-3) * 20;
    }
    if(tmh >= 6)
    {
        sum = 200;
    }
    cout << sum;
    return 0;
}