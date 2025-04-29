//https://atcoder.jp/contests/abc403/tasks/abc403_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;
    bool ch;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        ch = 1;
        int idx = i;
        for (int j = 0; j < b.size(); j++)
        {
            if (a[idx] != b[j] && a[idx] != '?')
            {
                ch = 0;
                break;
            }
            idx++;
        }
        if (ch)
        {
            cout << "Yes";
            return 0;
        }
        
    }
    cout << "No";
    return 0;
}