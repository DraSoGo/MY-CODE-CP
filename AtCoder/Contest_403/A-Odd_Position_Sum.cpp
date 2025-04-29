//https://atcoder.jp/contests/abc403/tasks/abc403_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,n,sum = 0;
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        cin >> x;
        i % 2 == 1?sum+=x:sum = sum;
    }
    cout << sum;
    return 0;
}