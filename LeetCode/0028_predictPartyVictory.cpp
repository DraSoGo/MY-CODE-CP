#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        string predictPartyVictory(string senate)
        {
            int ch = 1;
            while (ch >= 1)
            {
                queue <char> Q;
                bool c = 1;
                for (int i = 0; i < senate.size(); i++)
                {
                    cout << i << " " << senate[i] << "\n";
                    if (i == senate.size()-1 && !Q.empty() && Q.front() != senate[i])
                    {
                        cout << senate[i] << " " << Q.front() << "\n";
                        ch = 2;
                        Q.pop();
                        continue;
                    }
                    if (c && !Q.empty() && Q.back() != senate[i])
                    {
                        ch = 2;
                        c = 0;
                    }
                    else
                    {
                        cout << "^\n";
                        if (ch != 2)
                        {
                            ch = 0;
                        }
                        c = 1;
                        Q.push(senate[i]);
                    }
                }
                senate = "";
                while (!Q.empty())
                {
                    senate += Q.front();
                    Q.pop();
                }
            }
            if (senate[0] == 'R')
            {
                return "Radiant";
            }
            return "Dire";
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, k;
    string s;
    int x;
    cin >> s;
    cout << so.predictPartyVictory(s);
    return 0;
}