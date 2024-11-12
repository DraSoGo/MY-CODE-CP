#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie();cout.tie(0);
        }
        int longestOnes(vector<int> &nums, int k)
        {
            int l = 0,r;
            for (r = 0; r < nums.size(); r++)
            {
                if (nums[r] == 0)
                {
                    k--;
                }
                if (k < 0)
                {
                    if (nums[l] == 0)
                    {
                        k++;
                    }
                    l++;
                }
            }
            return r-l;
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
    cin >> k;
    cout << so.longestOnes(V, k);
    return 0;
}