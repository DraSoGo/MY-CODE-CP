#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio(0);cin.tie();cout.tie();
        }
        int equalPairs(vector<vector<int>> &grid)
        {
            int n = grid.size(),c = 0;
            map<vector<int>,int> tmp;
            for (int i = 0; i < n; i++)
            {
                tmp[grid[i]]++;
            }
            for (int i = 0; i < n; i++)
            {
                vector <int> V;
                for (int j = 0; j < n; j++)
                {
                    V.push_back(grid[j][i]);
                }
                c += tmp[V];
            }
            return c;
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
    vector<vector<int>> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> k;
            V[i].push_back(k);
        }
    }
    cout << so.equalPairs(V);
    return 0;
}