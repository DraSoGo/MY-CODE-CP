//https://atcoder.jp/contests/abc403/tasks/abc403_d
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6;
int mem[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d,x,ans = 0;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mem[x]++;
    }
    for (int i = 0; i < sz; i++)
    {
        if (i+d < sz)
        {
            if (mem[i] < mem[i+d])
            {
                ans += mem[i];
                mem[i] = 0;
            }
            else
            {
                ans += mem[i+d];
                mem[i+d] = 0;
            }
        }
    }
    cout << ans;
    return 0;
}