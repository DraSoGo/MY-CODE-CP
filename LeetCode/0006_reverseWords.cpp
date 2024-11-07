#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s)
    {
        string W[10000],n = "";
        int co = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (n.size() > 0)
                {
                    W[co] = n;
                    n = "";
                    co++;
                }
                continue;
            }
            n += s[i];
        }
        if (n.size() > 0)
        {
            W[co] = n;
            co++;
        }
        n = "";
        for (int i = co-1; i >= 0; i--)
        {
            n += W[i];
            if (i != 0)
            {
                n += " ";
            }
        }
        return n;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    string s;
    getline(cin,s);
    cout << so.reverseWords(s);
    return 0;
}