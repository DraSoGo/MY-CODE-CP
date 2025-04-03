#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string st;
    int co = 1,mx = INT_MIN;
    cin >> st;
    for (int i = 0; i < st.length()-1; i++)
    {
        if (st[i] == st[i+1])
        {
            co++;
        }
        else
        {
            mx = max(co,mx);
            co = 1;
        }
    }
    mx = max(co,mx);
    cout << mx;
    return 0;
}