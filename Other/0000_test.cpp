#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,n,q;
    string str;

    cin >> n >> q;
    int t = (1<<n);
    for (int i = 0; i < t; i++)
    {
        cin >> str >> x;
        int idx = 0;
        for (int j = 0; j < str.size(); j++)
        {
            idx <<= 1;
            idx += str[j]-'0';
            cout << idx << " ";
        }
        cout << "\n";
    }
    return 0;
}