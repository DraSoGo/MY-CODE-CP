#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b,c = "";
    int y = 0;
    cin >> a >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while (b.size() < a.size())
    {
        b += '0';
    }
    while (a.size() < b.size())
    {
        a += '0';
    }
    for (int i = 0; i < a.size(); i++)
    {
        // cout << a[i] << " " << b[i] << " " << char((((a[i]-'0') + (b[i]-'0') + y)%10)+'0') << " " << y << "\n";
        c += char(((a[i]-'0' + b[i]-'0' + y)%10)+'0');
        y = ((a[i]-'0' + b[i]-'0' + y)/10) % 10;
    }
    if (y == 1)
    {
        c += '1';
    }
    reverse(c.begin(),c.end());
    cout << c;
    return 0;
}
