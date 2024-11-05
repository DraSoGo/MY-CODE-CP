#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,sum = 1,co = 0,md = 1e9+7;
    string x,y;
    cin >> a >> x;
    for (int i = 0; i < a; i++)
    {
        co = 0;
        for (int j = 0; j < a; j++)
        {
            cin >> y;
            if (x == y)
            {
                co++;
            }
        }
        sum = ((co%md)*(sum%md))%md;
    }
    cout << sum % md;
    return 0;
}