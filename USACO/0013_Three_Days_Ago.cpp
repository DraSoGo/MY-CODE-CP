#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    map <int,long long> mp;
    long long bt = 0,ans = 0;
    mp[bt]++;
    for (int i = 0; i < s.length(); i++)
    {
        bt ^= 1 << s[i]-'0';
        mp[bt]++;
    }
    for (auto [i,j]:mp)
    {
        ans += (j*(j-1))/2;
    }
    cout << ans;
    return 0;
}