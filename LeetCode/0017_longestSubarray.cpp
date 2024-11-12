#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie();cout.tie();
        }
        int longestSubarray(vector<int>& nums)
        {
            int r,l = 0,c = 0;
            for(r = 0; r < nums.size(); r++)
            {
                if (nums[r] == 0)
                {
                    c++;
                }
                if (c > 1)
                {
                    if (nums[l] == 0)
                    {
                        c--;
                    }
                    l++;
                }
            }
            return r-l-1;
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
    cout << so.longestSubarray(V);
    return 0;
}