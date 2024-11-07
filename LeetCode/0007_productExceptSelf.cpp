#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector <int> ANS;
        int sum = 1,z = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum *= nums[i];
            if (nums[i] == 0)
            {
                z++;
            }
            if (z >= 2)
            {
                for (int j = 0; j < nums.size(); j++)
                {
                    ANS.push_back(0);
                }
                return ANS;
            }
        }
        if (z == 1)
        {
            int idx;
            sum = 1;
            for (int i = 0; i < nums.size(); i++)
            {
                ANS.push_back(0);
                if (nums[i] == 0)
                {
                    idx = i;
                }
                else
                {
                   sum *= nums[i];
                }
            }
            ANS[idx] = sum;
            return ANS;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            ANS.push_back(sum/nums[i]);
        }
        return ANS;
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
    A = so.productExceptSelf(V);
    for(auto i:A)
    {
        cout << i << " ";
    }
    return 0;
}