#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double n;
    cin >> n;
    if (n <= 50)
    {
        cout << fixed << setprecision(2) << n*2.0;
    }
    else
    {
        cout << fixed << setprecision(2) << n*3.5;
    }
    
    return 0;
}