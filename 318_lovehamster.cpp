#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    long long t,sum = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        sum = sum + a;
    }
    if (sum % 3 == 0)
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }
    
    return 0;
    
}