#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector <bool> A;
        int mx = INT_MIN;
        for (int i = 0; i < candies.size(); i++)
        {
            mx = max(mx,candies[i]);
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= mx)
            {
                A.push_back(1);
            }
            else
            {
                A.push_back(0);
            }
        }
        return A;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    int n,a,b;
    vector <int> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        V.push_back(a);
    }
    cin >> b;
    vector <bool> ANS = so.kidsWithCandies(V,b);
    for (int i = 0; i < ANS.size(); i++)
    {
        cout << ANS[i] << " ";
    }
    return 0;
}