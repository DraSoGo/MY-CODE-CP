#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool uniqueOccurrences(vector<int>& arr)
        {
            bool B[2001];
            short int A[2001];
            memset(B,0,sizeof(B));
            memset(A,0,sizeof(A));
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] >= 0)
                {
                    A[arr[i]]++;
                    continue;
                }
                A[2001+arr[i]]++;
            }
            for (int i = 0; i < 2001; i++)
            {
                if (A[i] == 0 || B[A[i]] == 0)
                {
                    B[A[i]] = 1;
                    continue;
                }
                return 0;
            }
            return 1;
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
    cout << so.uniqueOccurrences(V);
    return 0;
}