#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie();cout.tie();
        }
        int largestAltitude(vector<int>& gain)
        {
            short int A[gain.size()+1],mx = 0;
            A[0] = 0;
            for (int i = 0; i < gain.size(); i++)
            {
                A[i+1] = A[i]+gain[i];
                mx = max(mx,A[i+1]);
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
    string s;
    int x;
    cin >> n;
    vector<int> V, A;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cout << so.largestAltitude(V);
    return 0;
}