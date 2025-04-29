#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int ans = 1;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    string tmp = s;
    while (next_permutation(tmp.begin(),tmp.end()))
    {
        ans ++;
    }
    cout << ans << "\n";
    cout << s << "\n";
    while (next_permutation(s.begin(),s.end()))
    {
        cout << s << "\n";
    }
    return 0;
}