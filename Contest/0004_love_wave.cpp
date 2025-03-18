#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        int ch = 1;
        cin >> str;
        stack <char> S;
        for (auto c:str)
        {
            if (c == 'U')
            {
                if (S.empty() || S.top() != 'I')
                {
                    ch = 0;
                    break;
                }
                S.pop();
                continue;
            }
            S.push(c);
        }
        ch && S.empty()?cout << "Y\n":cout << "N\n";
    }
    return 0;
}