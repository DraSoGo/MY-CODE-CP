#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int ch = 0;
    stack <string> S;
    string s,st,sa;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[')
        {
            ch = 1;
        }
        if(ch == 0)
        {
            sa += s[i];
        }
        if (s[i] == ']')
        {
            ch = 0;
            S.push(st);
            st.clear();
        }
        if (ch == 1 && s[i] != '[')
        {
            st += s[i];
        }
    }
    while (!S.empty())
    {
        cout << S.top();
        S.pop();
    }
    cout << sa;
}