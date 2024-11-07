#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        vector <int> LIS;
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = lower_bound(LIS.begin(),LIS.end(),nums[i])-LIS.begin();
            if (idx >= LIS.size())
            {
                LIS.push_back(nums[i]);
            }
            else
            {
                LIS[idx] = nums[i];
            }
            if (LIS.size() >= 3)
            {
                return 1;
            }
        }
        return 0;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    int n,x;
    vector <int> V,A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cout << so.increasingTriplet(V);
    return 0;
}