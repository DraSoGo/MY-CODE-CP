#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        }
        string predictPartyVictory(string senate)
        {
            int n = senate.size();
            queue <int> QD,QR;
            for (int i = 0; i < n; i++)
            {
                if (senate[i] == 'D')
                {
                    QD.push(i);
                }
                else
                {
                    QR.push(i);
                }
            }
            while (!QD.empty() && !QR.empty())
            {
                // cout << QD.size() << " " << QR.size() << "\n";
                if (QD.front() > QR.front())
                {
                    QR.pop();
                    QD.pop();
                    QR.push(max(QD.back(),QR.back())+1);
                }
                else
                {
                    QR.pop();
                    QD.pop();
                    QD.push(max(QD.back(),QR.back())+1);
                }
            }
            if (QD.empty())
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