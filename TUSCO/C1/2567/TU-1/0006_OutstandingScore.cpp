#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int mx = 0,x;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        mx = max(mx,x);
    }
    cout << mx;
    return 0;
}