#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        string removeStars(string s)
        {
            stack <char> sol;
            string ANS = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '*' && !s.empty())
                {
                    sol.pop(); 
                    continue;
                }
                sol.push(s[i]);
            }
            while (!sol.empty())
            {
                ANS += sol.top();
                sol.pop();
            }
            reverse(ANS.begin(),ANS.end());
            return ANS;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, k;
    int x;
    string s;
    cin >> s;
    so.removeStars(s);
    // cout << so.removeStars(s);
    return 0;
}