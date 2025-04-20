#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    set <char> S;
    getline(cin,s);
    for(auto c:s)
    {
        if (c >= 'a' && c <= 'z')
        {
            S.insert(c);
        }
    }
    cout << S.size();
    return 0;
}