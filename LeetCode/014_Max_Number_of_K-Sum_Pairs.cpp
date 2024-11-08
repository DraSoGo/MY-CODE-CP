#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
        }
        int maxOperations(vector<int> &nums, int k)
        {
            int co = 0,l = 0,r = nums.size()-1;
            sort(nums.begin(),nums.end());
            while (l < r)
            {
                // cout << l << " " << r << " " << nums[l] + nums[r] <<  "\n";
                if (nums[l] + nums[r] == k)
                {
                    co++;
                    l++;
                    r--;
                }
                else if (nums[l] + nums[r] > k)
                {
                    r--;
                }
                else if (nums[l] + nums[r] < k)
                {
                    l++;
                }
            }
            return co;
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
    vector<int> V, A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cin >> k;
    cout << so.maxOperations(V, k);
    return 0;
}