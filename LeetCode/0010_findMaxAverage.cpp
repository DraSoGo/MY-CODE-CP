#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        double av,mx = INT_MIN,sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        av = sum/k;
        mx = av;
        for (int i = 1; i < nums.size()-k+1; i++)
        {
            sum -= nums[i-1];
            sum += nums[i+k-1];
            av = sum/k;
            mx = max(mx,av);
        }
        return mx;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    int n,k;
    int x;
    vector <int> V,A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cin >> k;
    cout << so.findMaxAverage(V,k);
    return 0;
}