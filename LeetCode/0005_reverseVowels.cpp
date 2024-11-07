#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s)
    {
        string r = "";
        char vv[] = {'a','e','i','o','u','A','E','I','O','U'};
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (s[i] == vv[j])
                {
                    r += s[i];
                    break;
                }
            }
        }
        reverse(r.begin(),r.end());
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (s[i] == vv[j])
                {
                    s[i] = r[c];
                    c++;
                    break;
                }
            }
        }
        return s;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    string s;
    cin >> s;
    cout << so.reverseVowels(s);
    return 0;
}