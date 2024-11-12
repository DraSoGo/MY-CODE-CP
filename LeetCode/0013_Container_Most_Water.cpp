#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int l = 0,r = height.size()-1,mx = 0;
            while (l < r)
            {
                mx = max(mx,min(height[l],height[r])*(r-l));
                if (height[l] >= height[r])
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            return mx;
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
    cout << so.maxArea(V);
    return 0;
}