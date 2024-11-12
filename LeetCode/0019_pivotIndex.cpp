#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie();cout.tie();
        }
        int pivotIndex(vector<int>& nums)
        {
            int pos,QS[nums.size()+2],ans = -1;
            QS[0] = 0;
            QS[nums.size()+1] = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                QS[i+1] = QS[i]+nums[i];
            }
            for (pos = 1; pos <= nums.size(); pos++)
            {
                // cout << QS[pos-1] << " " << QS[nums.size()]/2 << "\n";
                if (QS[pos-1] == QS[nums.size()]-QS[pos])
                {
                    ans = pos-1;
                    break;
                }
            }
            return ans;
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
    cin >> n;
    vector<int> V, A;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cout << so.pivotIndex(V);
    return 0;
}