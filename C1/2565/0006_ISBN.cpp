#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    int n = 10,sum = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        sum += n*(s[i]-'0');
        n--;
    }
    cout << s << 11-sum%11;
    return 0;
}
