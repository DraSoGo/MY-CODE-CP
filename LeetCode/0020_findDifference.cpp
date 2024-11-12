#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie();cout.tie();
        }
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
        {
            vector<vector<int>> ANS(2);
            unordered_set <int> A(nums1.begin(),nums1.end());
            unordered_set <int> B(nums2.begin(),nums2.end());
            for(auto i:A)
            {
                if (B.find(i) == B.end())
                {
                    ANS[0].push_back(i);
                }
            }
            for(auto i:B)
            {
                if (A.find(i) == A.end())
                {
                    ANS[1].push_back(i);
                }
            }
            return ANS;
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
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    vector<vector<int>> ANS = so.findDifference(V,A);
    for (int i = 0; i < ANS.size(); i++)
    {
        for (int j = 0; j < ANS[i].size(); j++)
        {
            cout << ANS[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}