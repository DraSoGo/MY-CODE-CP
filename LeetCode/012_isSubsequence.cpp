#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int j = 0;
            if(s == t)
            {
                return 1;
            }
            for (int i = 0; i < t.size(); i++)
            {
                if (s[j] == t[i])
                {
                    j++;
                }
                if (j == s.size())
                {
                    return 1;
                }
            }
            return 0;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    string a, b;
    cin >> a >> b;
    cout << so.isSubsequence(a, b);
    return 0;
}