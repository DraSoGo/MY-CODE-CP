#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
    int n,co3 = 0;
    cout << "Enter Alz : ";
    cin >> n;
    while (n > 0 && n % 5 != 0)
    {
        n -= 3;
        co3++;
    }
    if (n < 0)
    {
        cout << "Can't use this price!!!";
    }
    else
    {
        cout << "5 Alz : " << n/5 << " , 3 Alz : " << co3;
    }
    
    return 0;
}