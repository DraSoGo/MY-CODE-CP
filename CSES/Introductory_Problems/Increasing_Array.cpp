#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long sum = 0,n,x,y = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < y)
        {
            sum += y-x;
        }
        else
        {
            y = x;
        }
    }
    cout << sum;
    return 0;
}